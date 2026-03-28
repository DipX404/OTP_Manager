<h1 align="center" style="color:#4CAF50;">🔐 OTP Manager System</h1><p align="center">
  <b>A Terminal-based OTP Generation & Validation System in C</b>
</p><hr><h2 style="color:#2196F3;">📌 Overview</h2><p>
The <b>OTP Manager System</b> is a C-based project that simulates a real-world OTP authentication system.
It generates unique OTPs, assigns them to users, validates them within a fixed time, and manages expiration securely.
</p>---

<h2 style="color:#FF9800;">🚀 Features</h2><ul>
  <li>🔢 Generate unique OTPs (4-digit & 6-digit)</li>
  <li>⏳ Time-based OTP validity</li>
  <li>🔁 OTP reuse after expiry</li>
  <li>❌ No duplicate OTP during active session</li>
  <li>👤 User-based OTP system</li>
  <li>✅ OTP verification</li>
  <li>📊 Admin Dashboard</li>
  <li>📜 Logging system</li>
  <li>💾 File storage support</li>
  <li>🎨 Colorful Terminal UI</li>
</ul>---

<h2 style="color:#9C27B0;">🧠 System Workflow</h2><p align="center">
<b>
Generate → Assign → Verify → Expire → Reuse
</b>
</p>---

<h2 style="color:#E91E63;">🏗️ Project Structure</h2><pre>
OTP_Manager/
│
├── OTP Manager/
│   ├── src/
│   ├── include/
│   ├── data/
│   ├── Makefile
│   └── otp_manager.exe
│
└── README.md
</pre>---

<h2 style="color:#00BCD4;">⬇️ Download & Run</h2><h3>📱 Termux (Android)</h3><pre>
git clone https://github.com/DipX404/OTP_Manager.git
cd OTP_Manager
cd "OTP Manager"
clang src/*.c -Iinclude -o otp_manager
./otp_manager
</pre>---

<h3>🐧 Linux (Ubuntu/Kali)</h3><pre>
git clone https://github.com/DipX404/OTP_Manager.git
cd OTP_Manager
cd "OTP Manager"
gcc src/*.c -Iinclude -o otp_manager
./otp_manager
</pre>---

<h3>🖥️ Windows (VS Code / Terminal)</h3><pre>
git clone https://github.com/DipX404/OTP_Manager.git
cd OTP_Manager
cd "OTP Manager"
gcc src/*.c -Iinclude -o otp_manager.exe
otp_manager.exe
</pre>---

<h3> Alternative (ZIP Download)</h3><ul>
  <li>Go to GitHub repository</li>
  <li>Click <b>Code → Download ZIP</b></li>
  <li>Extract and open <b>OTP Manager</b> folder</li>
  <li>Compile & run</li>
</ul>---

<h2 style="color:#4CAF50;">🔐 Admin Dashboard</h2><ul>
  <li> View statistics</li>
  <li> Search OTP</li>
  <li> Force expire OTP</li>
  <li> View logs</li>
  <li> Clear history</li>
</ul>---

<h2 style="color:#FF5722;">📂 File Handling</h2><ul>
  <li><b>otp_history.txt</b> → OTP records</li>
  <li><b>logs.txt</b> → System logs</li>
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

<h2 style="color:#009688;"> Future Improvements</h2><ul>
  <li>SMS API integration</li>
  <li>GUI version</li>
  <li>Database support</li>
  <li>Web-based system</li>
</ul>---

<h2 style="color:#F44336;">⚠️ Notes</h2><ul>
  <li>Works on Linux, Termux, Windows</li>
  <li>Terminal-based application</li>
</ul>---

<h2 style="color:#795548;">👨‍💻 Author</h2><p>
<b>Mongaldip Chowdhury</b><br>
Student Of B.Tech.CSE - Cyber Security at Brainware University
</p>---

<h2 align="center" style="color:#4CAF50;">⭐ Thank You</h2><p align="center">
If you like this project, give it a ⭐ on GitHub!
</p>
