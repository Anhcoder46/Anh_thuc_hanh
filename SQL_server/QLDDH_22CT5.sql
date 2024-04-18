USE master --Sử dụng CSDL trang 19
Go
--Kiểm tra CSDL, QLDDH_22CT5 đã tồn tại chưa
if EXISTS(select name from master.sys.databases where name='QuanLyDonDatHang')
	--Xóa CSDL trang 19
	drop database QuanLyDonDatHang
Go
--Tạo CSDL trang 18
create database QuanLyDonDatHang
	on
		(Name = QuanLyDonDatHang, Filename = 'D:\Anh_thuc_hanh\SQL_server\sql.mdf',Size = 8 MB, Filegrowth = 10 MB)
	log on
		(Name = QuanLyDonDatHang_ldf, Filename = 'D:\Anh_thuc_hanh\SQL_server\sql.ldf',Size = 8 MB, Filegrowth = 10 MB)
Go
USE QLDDH_22CT5
Go
--Tạo bảng--
CREATE TABLE KhachHang (
	MaKH char(5) NOT NULL,
	TenKH nvarchar(25) NOT NULL,
	DiaChi nvarchar(20) NOT NULL,
	DienThoai varchar(15)
	--constraint pk_KhachHang primary key (MaKH)
)

CREATE TABLE HangHoa (
	MaHH char(2) NOT NULL, --Tạo khóa chính: primary key
	TenHH nvarchar(25) NOT NULL,
	DVT nchar(4) NOT NULL,
	SLCon tinyint NOT NULL,
	DonGiaHH int
	--constraint pk_HangHoa primary key (MaHH)
)

CREATE TABLE PhieuGiaoHang (
	MaGiao char(4) NOT NULL,
	NgayGiao date NOT NULL,
	MaDat char(4)
	--constraint pk_PhieuGiaoHang primary key (MaGiao)
)

CREATE TABLE LichSuGia (
	MaHH char(2) NOT NULL,
	NgayHL date NOT NULL,
	DonGia int
	--constraint pk_LichSuGia primary key (MaHH , NgayHL)
)

CREATE TABLE DonDatHang (
	MaDat char(4) NOT NULL,
	NgayDat date NOT NULL,
	MaKH char(5)
# 	--constraint pk_DonDatHang primary key (MaDat)
)

CREATE TABLE ChiTietDatHang (
	MaDat char(4) NOT NULL,
	MaHH char(2) NOT NULL,
	SLDat tinyint,
# 	constraint pk_ChiTietDatHang primary key (MaDat, MaHH)
)

CREATE TABLE ChiTietGiaoHang (
	MaGiao char(4) NOT NULL,
	MaHH char(2) NOT NULL,
	SLGiao tinyint NOT NULL,
	DonGiaGiao int
	--constraint pk_ChiTietGiaoHang primary key (MaGiao, MaHH)
)

--Sửa bảng trang 25
	--Thêm các ràng buộc khóa chính khóa ngoại
	alter table KhachHang
		add
			constraint pk_KhachHang primary key(MaKH)
go

alter table DonDatHang
	add
		constraint pk_DonDatHang primary key(MaDat), --Khóa chinhd trang 22
		constraint fk_DonDatHang_MaKH foreign key(MaKH) references KhachHang(MaKH) --Khóa ngoại trang 22
go

alter table HangHoa
	add
		constraint pk_HangHoa primary key(MaHH) --Khóa chinhd trang 22
go

alter table PhieuGiaoHang
	add
		constraint pk_PhieuGiaoHang primary key(MaGiao), --Khóa chinhd trang 22
		constraint fk_PhieuGiaoHang_MaDat foreign key(MaDat) references DonDatHang(MaDat) --Khóa ngoại trang 22
go

alter table ChiTietGiaoHang
	add
		constraint pk_ChiTietGiaoHang primary key(MaGiao, MaHH), --Khóa chinhd trang 22
		constraint fk_ChiTietGiaoHang_MaHH foreign key(MaHH) references HangHoa(MaHH) --Khóa ngoại trang 22
go

alter table LichSuGia
	add
		constraint pk_LichSuGia primary key(MaHH, NgayHL), --Khóa chinhd trang 22
		constraint fk_LichSuGia_MaHH foreign key(MaHH) references HangHoa(MaHH) --Khóa ngoại trang 22
go

alter table ChiTietDatHang
	add
		constraint pk_ChiTietDatHang primary key(MaDat, MaHH), --Khóa chinhd trang 22
		constraint fk_ChiTietDatHang_MaHH foreign key(MaHH) references HangHoa(MaHH), --Khóa ngoại trang 22
		constraint fk_ChiTietDatHang_MaDat foreign key(MaDat) references DonDatHang(MaDat)
go

----Các ràng buộc khác trang 22
----b. Thêm ràng buộc duy nhất(UNIQUE) cho trường TenHH trong bảng HangHoa
----Nhập dữ liệu để kiểm tra ràng buộc
--alter table HangHoa
--	add
--		constraint un_HangHoa_TenHH unique (TenHH)
--go
----c. Thêm ràng buộc kiểm tra (Check) cho trường SLCon, yêu cầu trường hợp này chỉ
----nhận giá trị >= , thử nhập dữ liệu kiểm tra ràng buộc
--alter table HangHoa
--	add
--		constraint ck_HangHoa_SLCon check (SLCon >= 0)
--go
----d. Thêm ràng buộc mặc định (DEFAULT) cho cột NgayDat trong DonDatHang với giá
----trị mặc định là ngày hiện tại, thử nhập dữ liệu để kiểm tra ràng buộc.
--alter table DonDatHang
--	add
--		constraint df_DonDatHang_NgayDat default (getdate()) for NgayDat
--go
----e. Xóa bảng KHACHHANG? Nếu không xóa được thì nêu lý do? Muốn xóa được thì
----phải làm sao?

----1. Xóa khóa ngoại DonDatHang
--alter table DonDatHang
--	drop fk_DonDatHang_MaKH
----2. Xóa bảng trang 25
--	drop table KhachHang
----f. Xóa cột DiaChi trong bảng KhachHang, sau đó tạo lại cột này với ràng buộc mặc định
----là “Đà Nẵng”.
--alter table KhachHang
--	drop
--		column DiaChi
----g. Xóa khóa ngoại MaDat trong PHIEUGIAOHANG tham chiếu tới MaDat trong
----DonDatHang, sau đó tạo lại khóa ngoại này
--alter table PhieuGiaoHang
--	drop fk_PhieuGiaoHang_MaDat

--Nhập dữ liệu Insert trang 26
insert into KhachHang(Makh, TenKH, DiaChi, DienThoai)
values('KH001', N'Cửa Hàng Phú Lộc', N'Đà Nẵng', '0511.3246125'),
		('KH002', N'Cửa Hàng Hoàng Gia', N'Quảng Nam', '0510.6333444'),
		('KH003', N'Nguyễn Lan Anh', N'Huế', '0988.148248'),
		('KH004', N'Công ty TNHH An Phước', N'Đà Nẵng', '0511.6987789'),
		('KH005', N'Huỳnh Ngọc Trung', N'Quảng Nam', '0905.888555'),
		('KH006', N'Cửa Hàng Trung Tín', N'Đà Nẵng', NULL)
go

set dateformat dmy --Đổi định dạng nhập liệu ngày tháng năm
go

insert into DonDatHang(MaDat, NgayDat, MaKH)
values('DH01', '02-02-2011', 'KH001'),
		('DH02', '12-02-2011', 'KH003'),
		('DH03', '22-01-2012', 'KH003'),
		('DH04', '22-03-2012', 'KH002'),
		('DH05', '14-04-2012', 'KH005'),
		('DH06', '05-08-2012', 'KH003'),
		('DH07', '25-11-2012', 'KH005')
go

insert into HangHoa(MaHH, TenHH, DVT, SLCon, DonGiaHH)
values('BU', N'Bàn ủi Philip', N'Cái', 60, 350000),
		('CD', N'Nồi cơm điện Sharp', N'Cái', 100, 700000),
		('DM', N'Đầu máy Sharp', N'Cái', 75, 1200000),
		('MG', N'Máy giặt SanYo', N'Cái', 10, 4700000),
		('MQ', N'Máy quạt ASIA', N'Cái', 40, 400000),
		('TL', N'Tủ lạnh Hitachi', N'Cái', 50, 350000),
		('TV', N'TiVi JVC 14WS', N'Cái', 33, 350000)
go

insert into PhieuGiaoHang(MaGiao, NgayGiao, MaDat)
values('GH01', '02-02-2011', 'DH01'),
		('GH02', '15-02-2011', 'DH02'),
		('GH03', '23-01-2012', 'DH03'),
		('GH05', '20-04-2012', 'DH05'),
		('GH06', '05-08-2014', 'DH06')
go

insert into ChiTietGiaoHang(MaGiao, MaHH, SLGiao, DonGiaGiao)
values('GH01', 'BU', 15, 300000),
		('GH01', 'DM', 10, 1000000),
		('GH01', 'TL', 4, 5000000),
		('GH02', 'BU', 10, 300000),
		('GH03', 'MG', 8, 4700000),
		('GH05', 'BU', 12, 3500000),
		('GH05', 'DM', 15, 1200000),
		('GH05', 'MG', 5, 4700000),
		('GH05', 'TL', 5, 5500000),
		('GH06', 'BU', 20, 3500000),
		('GH06', 'MG', 7, 4700000)
go

insert into ChiTietDatHang(MaDat, MaHH, SLDat)
values('DH01', 'BU', 15),
		('DH01', 'DM', 10),
		('DH01', 'TL', 4),
		('DH02', 'BU', 20),
		('DH02', 'TL', 3),
		('DH03', 'MG', 8),
		('DH04', 'TL', 5),
		('DH04', 'TV', 5),
		('DH05', 'BU', 12),
		('DH05', 'DM', 15),
		('DH05', 'MG', 6),
		('DH05', 'TL', 5),
		('DH06', 'BU', 30),
		('DH06', 'MG', 7)
go

--select*from DonDatHang --Dùng để chạy ra bảng


--+++++++++++++++++++++++++++++++++++++++++++++++
--Truy vấn, Query, Select trang29
--select TenHH as [Tên hàng hóa], MaHH
--from Khachhang
--where SLCon >= 50

-----

select *, GhiChu = case --TenHH as [Tên hàng hóa], MaHH --case... when... trang31
						when SLCon <= 10 then N'Bán chạy'
						when SLCon >= 60 then N'Bán ế'
						else ''
					end
from HangHoa

--top trang32 lấy dòng dữ liệu thứ n
select top 1 *
from HangHoa

--Distinct trang32 loại bỏ kết quả trùng lặp
select distinct DVT
from HangHoa

--where
select *
from HangHoa
where SLCon >= 60

--Bài tập
-- Lấy tất cả thông tin khách hàng
select *
from KhachHang
-- Lấy MaKH,TenKH. đổi tên MaKH thành Mã khách hàng
select MaKH as [Mã khách hàng], TenKH
from KhachHang
-- Lấy ra khách hàng ở Đà Nẵng
select *
from KhachHang
where DiaChi = N'Đà Nẵng'
-- khách hàng ở Quảng Nam hoặc Đà Nẵng
select *
from KhachHang
where DiaChi = N'Đà Nẵng' or DiaChi = N'Quảng Nam' --gộp điều kiện and or not
-- khách hàng không có số điện thoại
select *
from KhachHang
where DienThoai is null --trang35
-- khách hàng ở Quảng Nam, hoặc Quảng Ngãi hoặc Quảng Bình
select *
from KhachHang
where DiaChi in (N'Quảng Nam', N'Quảng Ngãi', N'Quảng Bình')
-- Khách hàng có tên bắt là 'Cửa hàng'
select *
from KhachHang
where TenKH like N'Cửa hàng%' --like trang34
-- Khách hàng trong SDT có dấu .
select *
from KhachHang
where DienThoai like '%.%' -- _._ 3 ký tự bắt buộc ở giữa phải là dấu. -- _ký tự bắt đầu, ko đc bắt đầu = dấu .
--% Đại diện cho 0 1 hay nhiều ký tự
-- hàng hóa có 10 <= SLCon <=100
select *
from HangHoa
where SLCon between 10 and 100 --between là toàn tử về mặt phạm vi giá trị trang33
-- Hàng hóa của hãng Sharp
select *
from HangHoa
where TenHH like '%Sharp%'
-- Hàng hóa của hãng Sharp mà SLCon >=100
select *
from HangHoa
where TenHH like '%Sharp%' and SLCon >= 100

--Order by, sắp xếp dữ liệu, trang 36
select *
from HangHoa
order by DonGiaHH asc --thứ tự tang dần  -- desc --thừ tự giảm dần

-- ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
--Nối bảng trang36
--Lấy ra họ tên KH có mua hàng
--Cách 1: phép đề các
select distinct KhachHang.TenKH --distinct loại bỏ sự trùng lặp
from KhachHang, DonDatHang
where KhachHang.MaKH = DonDatHang.MaKH
--Cách 2: inner join trang39
select *
from KhachHang as kh
	inner join DonDatHang as ddh on Kh.MaKH = ddh.MaKH

select *
from KhachHang
	inner join DonDatHang on KhachHang.MaKH = DonDatHang.MaKH

select *
from DonDatHang
	inner join PhieuGiaoHang on DonDatHang.MaDat = PhieuGiaoHang.MaDat

select ddh.*
from DonDatHang as ddh
	inner join PhieuGiaoHang as pgh on ddh.MaDat = pgh.MaDat

--a. Cho biết chi tiết giao hàng của đơn đặt hàng DH01, hiển thị tên hàng hóa, số lượng giao và đơn giá giao
select * --TenHH, SLGiao, DonGiaGiao
from HangHoa as hh
	inner join ChiTietGiaoHang as ctgh on ctgh.MaHH = hh.MaHH
	inner join PhieuGiaoHang as pgh on pgh.MaGiao = ctgh.MaGiao
where pgh.MaDat = 'DH01'

--Tên KH đã được giao hàng
select distinct kh.TenKH
from KhachHang as kh
		inner join DonDatHang as ddh on ddh.MaKH = kh.MaKH
		inner join PhieuGiaoHang as pgh on pgh.MaDat = ddh.MaDat

--b. Cho biết thông tin những đơn đặt hàng không được giao
--Cách 1: Câu lệnh truy vấn lồng, in
	select ddh.MaDat, ddh.NgayDat, kh.TenKH
	from DonDatHang as ddh
		inner join KhachHang as kh on ddh.MaKH = kh.MaKH
	where ddh.MaDat not in (select MaDat
						from PhieuGiaoHang)

--Cách 2: Toán tử exists
	select ddh.MaDat, ddh.NgayDat, kh.TenKH
	from DonDatHang as ddh
		inner join KhachHang as kh on ddh.MaKH = kh.MaKH
	where not exists (select MaDat
					from PhieuGiaoHang as pgh
					where pgh.MaDat = ddh.MaDat)

--Cách 3: Phép toán tập hợp trang 41 (hội là hốt hết u lên tr, giao lấy phần chung u úp xg, trừ)
	select *
	from
		(select MaDat from DonDatHang
			except --trừ
		select MaDat from PhieuGiaoHang) as tam
		inner join DonDatHang as ddh on tam.MaDat = ddh.MaDat
		inner join KhachHang as kh on kh.MaKH = ddh.MaKH

--Cách 4: left join
	select ddh.MaDat, ddh.NgayDat, kh.TenKH
		from DonDatHang as ddh
			left join PhieuGiaoHang as pgh on ddh.MaDat = pgh.MaDat
			inner join KhachHang as kh on kh.MaKH = ddh.MaKH
	where pgh.MaDat is null

--Hàng hóa chưa bao giờ được mua
		select hh.TenHH
			from HangHoa as hh
				left join ChiTietDatHang as ctdh on hh.MaHH = ctdh.MaHH
		where ctdh.MaHH is null

--Thống kê dữ liệu trang 42
--1. Thống kê trên toàn dữ liệu
	select count(TenHH)
	from HangHoa

	select sum(SLCon)
	from HangHoa

	select count(DonGiaHH)
	from HangHoa

	select count(DienThoai)
	from KhachHang

--2. Thống kê theo vùng dữ liệu trang 43
	select MaGiao, count(MaHH)
	from ChiTietGiaoHang
	group by MaGiao

-- Thống kê: MaGiao, TongSL, GiaTriCaoNhat
	select MaGiao, sum(SLGiao) as TongSL,
	GiaTriCaoNhat = max(DonGiaGiao)
	from ChiTietGiaoHang
	group by MaGiao

--c. Cho biết hàng hóa nào có đơn giá hiện hành cao nhất, hiển thị: tên hàng hóa, đơn giá hiện hành
select TenHH, DonGiaHH
from HangHoa
where DonGiaHH = (select max(DonGiaHH) from HangHoa)

select top 1 DonGiaHH
from HangHoa
order by DonGiaHH desc

--d. Cho biết số lần đặt hàng của từng khách hàng, những khách hàng không đặt hàng thì
--phải hiển thị số lần đặt hàng bằng 0. Hiển thị: Mã khách hàng, tên khách hàng, số lần đặt
select ddh.MaKH, kh.TenKH, SoLanDat = count(ddh.MaDat)
from DonDatHang as ddh
inner join KhachHang as kh on ddh.MaKH = kh.MaKH
group by ddh.MaKH, kh.TenKH

--e. Cho biết tổng tiền của từng phiếu giao hàng trong năm 2012, hiển thị: mã giao, ngày
--giao, tổng tiền, với tổng tiền= SUM(SLGiao*DonGiaGiao)
select ctgh.MaGiao, pgh.NgayGiao, TongTien = sum(ctgh.SLGiao * ctgh.DonGiaGiao)
from ChiTietGiaoHang as ctgh
	inner join PhieuGiaoHang as pgh on pgh.MaGiao = ctgh.MaGiao
where year(pgh.NgayGiao) = 2012
group by pgh.NgayGiao, ctgh.MaGiao

--f. Cho biết khách hàng nào có 2 lần đặt hàng trở lên, hiển thị: mã khách hàng, tên khách hàng, số lần đặt
select ddh.MaKH, kh.TenKH, SoLanDat = count(ddh.MaDat)
from KhachHang as kh
	inner join DonDatHang as ddh on kh.MaKH = ddh.MaKH
group by ddh.MaKH, kh.TenKH
having count(ddh.MaDat) >= 2 --Chỉ định điều kiện hàm thống kê trang 44, hàm thống kê ko đc viết trong where
--g. Cho biết mặt hàng nào đã được giao với tổng số lượng giao nhiều nhất, hiển thị: mã hàng, tên hàng hóa, tổng số lượng đã giao
select ctgh.MaHH, hh.TenHH, TongSoLuongGiao = sum(SLGiao)
from HangHoa as Hh
	inner join ChiTietGiaoHang as ctgh on hh.MaHH = ctgh.MaHH
group by ctgh.MaHH, hh.TenHH
having sum(ctgh.SLGiao) = (select top 1 TongSoLuongGiao = sum(ctgh.SLGiao)
							from ChiTietGiaoHang as ctgh
							group by ctgh.MaHH
							order by sum(ctgh.SLGiao) desc)
