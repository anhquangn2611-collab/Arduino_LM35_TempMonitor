# 👶 E-Nanny: Smart Baby Temperature Monitor

## 📝 Giới thiệu
Dự án tập trung vào việc giám sát nhiệt độ môi trường cho trẻ nhỏ sử dụng cảm biến LM35 và Arduino. Dữ liệu được xử lý và xuất ra dưới dạng JSON để dễ dàng tích hợp với các hệ thống theo dõi thông minh.

## 🚀 Tính năng nổi bật
- **Đọc đa kênh:** Hỗ trợ đọc đồng thời 03 cảm biến LM35 (A0, A1, A2).
- **Định dạng hiện đại:** Xuất dữ liệu chuẩn JSON qua Serial.
- **Độ chính xác cao:** Công thức tính toán nhiệt độ được tối ưu hóa.

## 🛠️ Thành phần phần cứng
| Linh kiện | Số lượng | Chân kết nối |
| :--- | :---: | :---: |
| Arduino Uno R3 | 01 | Trung tâm xử lý |
| Cảm biến LM35 | 03 | A0, A1, A2 |
| Breadboard | 01 | Kết nối mạch |

## 💻 Cấu trúc thư mục
- `/firmware`: Chứa file `LM35_TempReader.ino`.
- `/docs`: Tài liệu hướng dẫn và báo cáo tuần.

## 👥 Thành viên thực hiện
- **Nguyễn Quang Anh** - Lớp: [D23CQCI01-N] - MSSV: [N23DCCI003]
