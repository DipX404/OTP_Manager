<h1 align="center" style="color:#4CAF50;">🔐 OTP Manager System</h1><p align="center">
  <b>A Terminal-based Password Validity Management System in C</b>
</p><hr><h2 style="color:#2196F3;">📌 Overview</h2><p>
The <b>OTP Manager System</b> is a C-based project that simulates a real-world 
<b>OTP authentication and management system</b>. It generates a pool of OTPs, assigns them to users,
validates them within a time limit, and securely reuses them after expiration.
</p>---

<h2 style="color:#FF9800;">🚀 Features</h2><ul>
  <li>🔢 Generate 1000 unique OTPs (4-digit & 6-digit)</li>
  <li>⏳ Time-based validity (10 minutes)</li>
  <li>🔁 OTP reuse after expiry</li>
  <li>❌ No duplicate active OTP</li>
  <li>👤 User-based OTP assignment</li>
  <li>✅ OTP verification system</li>
  <li>📊 Admin Dashboard</li>
  <li>📜 Logging system</li>
  <li>💾 File storage</li>
  <li>🎨 Colorful Terminal UI</li>
</ul>---

<h2 style="color:#9C27B0;">🧠 System Workflow</h2><p align="center">
<b>
Generate OTP Pool → Assign OTP → Verify OTP → Expire OTP → Reuse OTP
</b>
</p>---

<h2 style="color:#E91E63;">🏗️ Project Structure</h2><pre>
OTP_Manager/
│
├── src/
│   ├── main.c
│   ├── otp.c
│   ├── admin.c
│   ├── storage.c
│   ├── logger.c
│   └── ui.c
│
├── include/
│   ├── otp.h
│   ├── admin.h
│   ├── storage.h
│   ├── logger.h
│   └── ui.h
│
├── data/
│   ├── otp_history.txt
│   └── logs.txt
│
└── README.md
</pre>---

<h2 style="color:#00BCD4;">⚙️ How to Run</h2><h3>🖥️ Linux / Termux</h3><pre>
clang src/*.c -Iinclude -o otp_manager
./otp_manager
</pre><h3>🪟 Windows</h3><pre>
gcc src/*.c -Iinclude -o otp_manager.exe
otp_manager.exe
</pre>---

<h2 style="color:#4CAF50;">🔐 Admin Dashboard</h2><ul>
  <li>📊 View system statistics</li>
  <li>👤 Search user OTP</li>
  <li>❌ Force expire OTP</li>
  <li>📜 View logs</li>
  <li>🧹 Clear history</li>
  <li>🔄 Reset system</li>
</ul>---

<h2 style="color:#FF5722;">📂 File Handling</h2><ul>
  <li><b>otp_history.txt</b> → Stores OTP records</li>
  <li><b>logs.txt</b> → Stores system logs</li>
</ul>---

<h2 style="color:#3F51B5;">🎯 Objectives</h2><ul>
  <li>Implement OTP generation and validation</li>
  <li>Ensure security using time-based expiry</li>
  <li>Prevent duplicate OTP usage</li>
  <li>Simulate real-world authentication systems</li>
</ul>---

<h2 style="color:#F44336;">⚠️ Limitations</h2><ul>
  <li>No GUI (Terminal-based)</li>
  <li>No SMS/email integration</li>
  <li>Local system only</li>
</ul>---

<h2 style="color:#009688;">🔮 Future Improvements</h2><ul>
  <li>SMS API integration</li>
  <li>GUI version</li>
  <li>Database support</li>
  <li>Web-based system</li>
</ul>---

<h2 style="color:#795548;">👨‍💻 Author</h2><p>
<b>Mongaldip Chowdhury</b><br>
C Programming Project (College Level)
</p>---

<h2 align="center" style="color:#4CAF50;">⭐ Thank You</h2>
<p align="center">
If you like this project, give it a ⭐ on GitHub!
</p>
