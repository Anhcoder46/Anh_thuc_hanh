public ActionResult Index(string sortOrder)
{
    // 1. Thêm biến NameSortParm để biết trạng thái sắp xếp tăng, giảm ở View
    ViewBag.NameSortParm = String.IsNullOrEmpty(sortOrder) ? "name_desc" : "";

    //2.Tạo câu truy vấn kết 3 bảng Book, Author, Category
    var books = db.Books.Include(b => b.Author).Include(b => b.Category);
    //3. Sắp xếp theo sortOrder
    switch (sortOrder)
    {
        // 3.1 Nếu biến sortOrder sắp giảm thì sắp giảm theo Title
        case "name_desc":
            books = books.OrderByDescending(b => b.Title);
            break;

        // 3.2 Mặc định thì sẽ sắp tăng
        default:
            books = books.OrderBy(b => b.Title);
            break;
    }

    // 4. Trả kết quả về Views
    return View(books.ToList());
}