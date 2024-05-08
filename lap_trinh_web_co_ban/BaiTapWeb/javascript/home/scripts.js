document.addEventListener("DOMContentLoaded", function() {
    const productList = document.getElementById("product-list");
    const prevBtn = document.getElementById("prev-btn");
    const nextBtn = document.getElementById("next-btn");
    const pageNum = document.getElementById("page-num");
    const products = [products]; // Mảng chứa tất cả sản phẩm
    const itemsPerPage = 8;
    let currentPage = 1;

    // Lấy dữ liệu sản phẩm từ API hoặc local storage
    // Sau đó thêm vào mảng products

    // Hiển thị sản phẩm theo trang
    function displayProducts() {
        const startIndex = (currentPage - 1) * itemsPerPage;
        const endIndex = currentPage * itemsPerPage;
        const displayedProducts = products.slice(startIndex, endIndex);

        productList.innerHTML = "";
        displayedProducts.forEach(product => {
            const li = document.createElement("li");
            li.classList.add("main-product");
            li.innerHTML = `
                <div class="img-product">
                    <img class="img-prd" src="${product.imageUrl}" alt="${product.name}">
                </div>
                <div class="content-product">
                    <h3 class="content-product-h3">${product.name}</h3>
                    <div class="content-product-deltals">
                        <div class="price">
                            <span class="money">${product.price}</span>
                        </div>
                        <button type="button" class="btn btn-cart">Thêm Vào Giỏ</button>
                    </div>
                </div>
            `;
            productList.appendChild(li);
        });

        pageNum.textContent = currentPage;
    }

    // Xử lý sự kiện khi nhấn nút trang trước
    prevBtn.addEventListener("click", function() {
        if (currentPage > 1) {
            currentPage--;
            displayProducts();
        }
    });

    // Xử lý sự kiện khi nhấn nút trang kế tiếp
    nextBtn.addEventListener("click", function() {
        const maxPage = Math.ceil(products.length / itemsPerPage);
        if (currentPage < maxPage) {
            currentPage++;
            displayProducts();
        }
    });

    // Hiển thị trang sản phẩm ban đầu
    displayProducts();
});
