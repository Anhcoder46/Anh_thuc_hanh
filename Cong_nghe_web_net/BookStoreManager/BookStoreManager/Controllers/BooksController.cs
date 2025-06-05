using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.IO;
using System.Linq;
using System.Net;
using System.Web;
using System.Web.Mvc;
using BookStoreManager.Models;
using PagedList;
using System.Linq.Dynamic; // nhúng vào tập tin 
using System.Linq.Expressions; // nhúng vào tập tin 

namespace BookStoreManager.Controllers
{
    public class BooksController : Controller
    {
        private BookStoreEntity db = new BookStoreEntity();
        [HttpGet]
        public ActionResult Index(int? size, int? page, string sortProperty, string searchString, string sortOrder = "", int categoryID = 0)
        {
            // 1. Tạo biến ViewBag SortOrder để giữ trạng thái sắp tăng hay giảm
            ViewBag.SortOrder = String.IsNullOrEmpty(sortOrder) ? "desc" : "";
            // 1. Đoạn code dùng để tìm kiếm
            // 1.1. Lưu tư khóa tìm kiếm
            ViewBag.Keyword = searchString;
            //1.2 Lưu chủ đề tìm kiếm
            ViewBag.Subject = categoryID;
            //1.2.Tạo câu truy vấn kết 3 bảng Book, Author, Category
            var books = db.Books.Include(b => b.Author).Include(b => b.Category);

            //1.3. Tìm kiếm theo searchString
            if (!String.IsNullOrEmpty(searchString))
                books = books.Where(b => b.Title.Contains(searchString));

            //1.4. Tìm kiếm theo CategoryID
            if (!String.IsNullOrEmpty(searchString))
                books = books.Where(b => b.Title.Contains(searchString));

            //1.5. Tìm kiếm theo CategoryID
            if (categoryID != 0)
                books = books.Where(c => c.CategoryID == categoryID);

            //1.6. Tìm kiếm theo Danh sách chủ đề
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName"); // danh sách Category               

            // 2 Đoạn code này dùng để sắp xếp
            // 2.1. Tạo biến ViewBag gồm sortOrder, searchValue, sortProperty và page
            if (sortOrder == "asc") ViewBag.SortOrder = "desc";
            if (sortOrder == "desc") ViewBag.SortOrder = "";
            if (sortOrder == "") ViewBag.SortOrder = "asc";
            // 2.1. Tạo thuộc tính sắp xếp mặc định là "Title"
            if (String.IsNullOrEmpty(sortProperty)) sortProperty = "Title";

            // 2.2. Sắp xếp tăng/giảm bằng phương thức OrderBy sử dụng trong thư viện Dynamic LINQ
            if (sortOrder == "desc")
                books = books.OrderBy(sortProperty + " desc");
            else
                books = books.OrderBy(sortProperty);

            // 3 Đoạn code sau dùng để phân trang
            ViewBag.Page = page;

            // 3.1. Tạo danh sách chọn số trang
            List<SelectListItem> items = new List<SelectListItem>();
            items.Add(new SelectListItem { Text = "5", Value = "5" });
            items.Add(new SelectListItem { Text = "10", Value = "10" });
            items.Add(new SelectListItem { Text = "20", Value = "20" });
            items.Add(new SelectListItem { Text = "25", Value = "25" });
            items.Add(new SelectListItem { Text = "50", Value = "50" });
            items.Add(new SelectListItem { Text = "100", Value = "100" });
            items.Add(new SelectListItem { Text = "200", Value = "200" });

            // 3.2. Thiết lập số trang đang chọn vào danh sách List<SelectListItem> items
            foreach (var item in items)
            {
                if (item.Value == size.ToString()) item.Selected = true;
            }
            ViewBag.Size = items;
            ViewBag.CurrentSize = size;
            // 3.3. Nếu page = null thì đặt lại là 1.
            page = page ?? 1; //if (page == null) page = 1;

            // 3.4. Tạo kích thước trang (pageSize), mặc định là 5.
            int pageSize = (size ?? 5);

            ViewBag.pageSize = pageSize;

            // 3.5. Toán tử ?? trong C# mô tả nếu page khác null thì lấy giá trị page, còn
            // nếu page = null thì lấy giá trị 1 cho biến pageNumber.
            int pageNumber = (page ?? 1);

            // 3.6 Lấy tổng số record chia cho kích thước để biết bao nhiêu trang
            int checkTotal = (int)(books.ToList().Count / pageSize) + 1;

            // Nếu trang vượt qua tổng số trang thì thiết lập là 1 hoặc tổng số trang
            if (pageNumber > checkTotal) pageNumber = checkTotal;

            // 4. Trả kết quả về Views
            return View(books.ToPagedList(pageNumber, pageSize));
        }

        // GET: Books
        public ActionResult Index(string searchString, int categoryID = 0)
        {

            // 1. Lưu tư khóa tìm kiếm
            ViewBag.Keyword = searchString;
            //2.Tạo câu truy vấn kết 3 bảng Book, Author, Category
            var books = db.Books.Include(b => b.Author).Include(b => b.Category);
            //3. Tìm kiếm theo searchString
            if (!String.IsNullOrEmpty(searchString))
                books = books.Where(b => b.Title.Contains(searchString));

            //4. Tìm kiếm theo CategoryID
            if (categoryID != 0)
            {
                books = books.Where(c => c.CategoryID == categoryID);
            }
            //5. Tạo danh sách danh mục để hiển thị ở giao diện View thông qua DropDownList
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName"); // danh sách Category               
            return View(books.ToList());
        }

        // GET: Books/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Book book = db.Books.Find(id);
            if (book == null)
            {
                return HttpNotFound();
            }
            return View(book);
        }

        // GET: Books/Create
        public ActionResult Create()
        {
            ViewBag.AuthorID = new SelectList(db.Authors, "AuthorID", "AuthorName");
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName");
            return View();
        }

        // POST: Books/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        [ValidateInput(false)]
        public ActionResult Create([Bind(Include = "BookID,Title,AuthorID,Price,Images,CategoryID,Description,Published,ViewCount")] Book book, HttpPostedFileBase Images)
        {
            if (ModelState.IsValid)
            {
                try
                {
                    if (Images.ContentLength > 0)
                    {
                        string _FileName = Path.GetFileName(Images.FileName);
                        string _path = Path.Combine(Server.MapPath("~/bookimages"), _FileName);
                        Images.SaveAs(_path);
                        book.Images = _FileName;
                    }
                    db.Books.Add(book);
                    db.SaveChanges();
                    return RedirectToAction("Index");
                }
                catch
                {
                    ViewBag.Message = "không thành công!!";
                }

            }

            ViewBag.AuthorID = new SelectList(db.Authors, "AuthorID", "AuthorName", book.AuthorID);
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName", book.CategoryID);
            return View(book);
        }
        // GET: Books/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Book book = db.Books.Find(id);
            if (book == null)
            {
                return HttpNotFound();
            }
            ViewBag.AuthorID = new SelectList(db.Authors, "AuthorID", "AuthorName", book.AuthorID);
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName", book.CategoryID);
            return View(book);
        }

        // POST: Books/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include = "BookID,Title,AuthorID,Price,Images,CategoryID,Description,Published,ViewCount")] Book book)
        {
            if (ModelState.IsValid)
            {
                db.Entry(book).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            ViewBag.AuthorID = new SelectList(db.Authors, "AuthorID", "AuthorName", book.AuthorID);
            ViewBag.CategoryID = new SelectList(db.Categories, "CategoryID", "CategoryName", book.CategoryID);
            return View(book);
        }

        // GET: Books/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Book book = db.Books.Find(id);
            if (book == null)
            {
                return HttpNotFound();
            }
            return View(book);
        }

        // POST: Books/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            Book book = db.Books.Find(id);
            db.Books.Remove(book);
            db.SaveChanges();
            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}
