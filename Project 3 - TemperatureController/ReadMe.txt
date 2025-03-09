Temperature Control System

Overview: The Temperature Control System is an embedded solution designed to monitor and regulate temperature in real-time. Using an Arduino microcontroller, temperature sensors, and an actuator (such as a fan or heater), the system ensures that environmental conditions remain within a specified threshold. This project is ideal for industrial applications, home automation, and smart climate control.

Features

✅ Real-time Temperature Monitoring – Continuously reads temperature from a sensor and displays the data.
✅ Automatic Control – Activates cooling/heating devices when temperature exceeds predefined limits.
✅ User-defined Thresholds – Set minimum and maximum temperature limits via code adjustments.
✅ OLED/LCD Display (Optional) – Displays real-time temperature and system status.
✅ Data Logging (Optional) – Stores temperature readings for further analysis.

Components Used

Hardware:
    Microcontroller: Arduino Uno/Nano
    Temperature Sensor: DHT11/DHT22, LM35, or DS18B20
    Actuator: Relay module connected to a fan/heater
    Power Supply: 5V/12V DC (depending on components used)
    Display (Optional): 16x2 LCD with I2C or OLED
    Buzzer (Optional): For over-temperature alerts
Software & Tools:
    Arduino IDE – For writing and uploading code
    C/C++ (Embedded Programming) – Used for logic implementation
    Serial Monitor – Debugging and real-time data monitoring
    DBeaver / MongoDB (Optional) – For logging temperature data remotely

1️⃣ Temperature Sensor Reads Data → Measures ambient temperature.
2️⃣ Microcontroller Processes Data → Compares against predefined limits.
3️⃣ Decision Making →
    If temperature exceeds the limit, the cooling system (fan) activates.
    If temperature drops below the limit, the heating system (if applicable) activates.
    4️⃣ Display & Alert Mechanism (Optional) →
        Shows real-time temperature on an LCD/OLED.
        Activates a buzzer for extreme temperatures.
    5️⃣ Data Logging (Optional) →
        Stores temperature history for further analysis.
        Circuit Diagram

Installation & Setup

1️⃣ Clone the Repository:

git clone https://github.com/aryanh289/ArduinoProjects.git
cd TemperatureControlSystem

2️⃣ Upload Code to Arduino:

Open the TemperatureControlSystem.ino file in Arduino IDE.
Select the correct board (Arduino Uno/Nano) and port.
Click Upload.

3️⃣ Connect Hardware:

Connect the temperature sensor, relay module, and display as per the circuit diagram.

4️⃣ Monitor Output:

Open the Serial Monitor (9600 baud rate) in Arduino IDE to see temperature readings.
Usage Instructions

1️⃣ Power ON the system.
2️⃣ The sensor starts measuring temperature continuously.
3️⃣ The system will automatically turn on/off the cooling/heating unit based on the set threshold.
4️⃣ View temperature readings on the display or serial monitor.
5️⃣ Modify the threshold in the Arduino code if needed.

Future Enhancements

🚀 IoT Integration: Send temperature data to the cloud for remote monitoring.
🚀 Mobile App Control: Control temperature thresholds from a smartphone app.
🚀 Multiple Sensors Support: Use multiple temperature sensors for different zones.
🚀 Machine Learning (Advanced): Predict temperature fluctuations based on past data.

License: This project is open-source under the MIT License. Feel free to modify and contribute!

Contributors:

👨‍💻 Harsh Aryan – Lead Developer
📌 GitHub: @aryanh289