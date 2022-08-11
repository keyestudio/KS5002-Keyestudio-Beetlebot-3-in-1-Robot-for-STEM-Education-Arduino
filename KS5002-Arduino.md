# **KS5002 Keyestudio Beetlebot 3 in 1 Robot for STEM Education-Arduino**


## **Get started with Arduino**

Contents

**1. Windows System：**

![](media/6cf6312dc7c7db27794b54d58a8bf80c.png)

**1.1 Installing Arduino IDE**

When you get control board, you need to download Arduino IDE and driver
firstly.

You could download Arduino IDE from the official website:

<https://www.arduino.cc/>, click the **SOFTWARE** on the browse bar,
click“DOWNLOADS” to enter download page, as shown below:

![](media/bfe8c9e405c71123dee7921eddff86d3.png)

![](media/7250961db41ba42e4b881d77bd76a319.png)

There are various versions of IDE for Arduino. Just download a version
compatible with your system. Here we will show you how to download and
install the windows version of Arduino IDE.

![](media/894116c5cf0023dd9720946cfb441790.png)

There are two versions of IDE for WINDOWS system. You can choose between
the installer (.exe) and the Zip file. For installer, it can be directly
downloaded, without the need of installing it manually while for Zip
package, you will need to install the driver manually.

![](media/a983a2f2eceb968afbff8ba0f0376240.png)

You just need to click JUST DOWNLOAD.

After the Arduino is downloaded, click“I Agree”to continue installing

![](media/00e334d3c756a2495da6f0d1b2db680a.png)

Click **Next**

![](media/de541d90a1cda992ad8e3f0cbaf95f94.png)

Then click **Install.**

![](media/7da9aca1e8432c59372e7c7ab2574bd9.png)

If the following page appears, click **Install.**

![](media/85b29de2aa791ecc77280ccde91e53c5.png)

![](media/739c41701fbcab202f0e587f534bad30.png)

![](media/d28223c55a30f949760779720fe4ec24.png)

## 1.2 Install a driver on Windows：

If you have installed the driver, just skip it.

Before using the ESP32 board, you must install a driver, otherwise it
will not communicate with computer.

Unlike the USB series chip (ATMEGA8U2) of the Arduino UNO R3, the ESP32
board is used the CP2102 chip USB series chip and USB type C interface.

The driver of the CP2102 chip is included in 1.8.0 version and newer
version of Arduino IDE. Usually, you connect the board to the computer
and wait for Windows to begin its driver installation process. After a
few moments, the process will succeed.

If the driver installation process fail, you need to install the driver
manually.

Note:

1\. Please make sure that your IDE is updated to 1.8.0 or newer version

2.If the version of Arduino IDE you download is below 1.8, you should
download the driver of CP2102 and install it manually.

Link to download the driver of CP2102:

[**https://fs.keyestudio.com/CP2102-WIN**](https://fs.keyestudio.com/CP2102-WIN)

To install the drive manually, open the device manager of computer.

Right click Computer----- Click Properties-----Click Device Manager.

Look under Ports (COM & LPT) or other device.

A yellow exclamation mark means that the CP2102 driver installation
failed.

![](media/9af2e34bf9bdd6675bdf5fa8cd291971.png)

Double-click ![](media/a2455b26773cb8d6cb3fccc605ea4dd7.png) and click **Update drive...**”

![](media/a122cd6fef74eb5c0c7fe16fac2fed59.png)

Click“Browse my computer for updated driver software”.

![](media/a02d3e643231cfe267d4debf0ef258c4.png)

There is a DRIVERS folder in Arduino software installed
package（![](media/aae89b3213589edf1c320d5502489820.png)）, open driver folder and you can see
the driver of CP210X series chips.

Click“Browse”, then find the driver folder, or you could enter“driver”to
search in rectangular box, then click“Next”,

![](media/eb6ca318005b5c570ad4fbef73024351.png)

![](media/4f2af46602a5ef73985914170911c519.png)

Open device manager, you will find the yellow exclamation mark
disappear. The driver of CP2102 is installed successfully.

![](media/af2324b73308f1796b8b7c9dc14878e7.png)

## 1.3. Install the ESP32 on Arduino IDE：

Note：you need to download Arduino IDE 1.8.5 or advanced version to
install the ESP32

1)  Click![](media/4f2de68a91c7f59024aa87a522e36ab3.png)to open Arduino IDE
    
    ![](media/8aca9b5378e794375f2c15d3b4e238ba.png)

2)  **Click File**” →**“Preferences”**，copy the website address
    <https://dl.espressif.com/dl/package_esp32_index.json> in
    the“**Additional Boards Manager URLs:**”and click“**OK**”
    
    ![](media/a8febbd62268514a30cec4e183b1eaed.png)

![](media/ea68c66041f48b44b4682eb3a0e11e79.png)

Click“**Tools**”→“**Board:**”then click “**Boards Manager...**”to
enter“**Boards Manager**”.

Enter **ESP32**”as follows, then click **Install**

![](media/a710d2a8166e3e62d9b48d9b7386e9e4.png)

![](media/9824059733dcbbfb3dff58736923a4a9.png)

After installing, click“**Close**”

## 1.4. **Arduino IDE Setting**

Click![](media/675ae7298ce0973df720b2fbbb514caa.png)icon to pen Arduino IDE.

![](media/8aca9b5378e794375f2c15d3b4e238ba.png)

When downloading the sketch to the board, you must select the correct
name of Arduino board that matches the board connected to your computer.
As shown below;

(Note: we use the ESP32 board in this tutorial; therefore, we select
ESP32**)**

![](media/78695faae974868fb29c972e89a9d917.png)

![](media/3a3bbc0ce1845aceb35af40aea7c84ca.png)

Set the board type as follows;

![](media/43b6c4d7f639f1e4b7adb017db805ea1.png)

Then select the correct COM port (you can see the corresponding COM port
after the driver is successfully installed).

![](media/94587092f31929ebb9cdbcc5fe1718de.png)

![](media/97ab2e53b87bd0812b2b064405f86196.png)

![](media/1235ef274c17d00db74fca324072ff84.png)

A- Used to verify whether there is any compiling mistakes or not.

B- Used to upload the sketch to your Arduino board.

C- Used to create shortcut window of a new sketch.

D- Used to directly open an example sketch.

E- Used to save the sketch.

F- Used to send the serial data received from board to the serial
monitor.

2.  **Mac System**

![](media/a6fc83596009c574d8e29ef383748549.png)

1.  ## Download Arduino IDE:
    
    ![](media/5d58d3cf67b308423ddb9f286f6cb697.png)

## **2.2 How to install the CP2102 driver：**

If you have installed the driver, just skip it

Connect the ESP32 board to your computer, and open Arduino IDE

![](media/a72fe5a29c6af0cd24aba7ab59b4996e.emf)

Click **Tools→Board:ESP32 Dev Module and
/dev/cu.usbserial-0001.**![](media/00d823dbf27e569a2ba23277b1e15a41.jpeg)

Click ![](media/9c9158a5d49baa740ea2f0048f655017.png) to upload code.

Note: If code is uploaded unsuccessfully, you need to install driver of
CP2102, please continue to follow the instructions as below:

Download the driver of CP2102:

<https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers>

Select Mac OSX edition, as shown below;

![](media/c09e7c279a858574756d1192b3a995aa.png)

Unzip the downloaded package.

![](media/6870a714ddd11015dc43b1d5743e0666.jpeg)

Open folder and double-click **SiLabsUSBDriverDisk.dmg** file.

![](media/61ae3e706a1c4afa7948d5fb2e797a6d.png)

You will view the following files as follows:

![](media/3f1afe9499f6d852492cfb9d6b11e9ab.jpeg)

Double-click Install CP210x VCP Driver, tick **on’t warn me when opening
application on this** **disk image** and tap **Open.**

![](media/14f6ebb088e654abc2f0149645e34ed1.png)

Tap **Continue**

![](media/b1cb125dccf6470ebe255f8f65b902eb.jpeg)

Tap **Agree,** and **Continue**

![](media/865dcc76cb7f58854b56f1020233f05e.jpeg)

Click **Continue** and input your password.

![](media/1ef6d65b61ad7c6e0a3989ba59de74d5.jpeg)

![](media/29bbca3360d806164717733460574356.png)

**Select Open Security Preferences**

![](media/ca6bc6e536202f07a53c09201a0996ff.png)

8.  Click the lock to unlock security & privacy preference.
    
    ![](media/cb6be428257143635fc4f729487549c5.jpeg)
    
    Tap **Unlock and** enter **your Username and password**
    
    ![](media/e8f637a3a9510aa8f90c65820d4d1cd8.jpeg)
    
    Then click **Allow**
    
    ![](media/250a1cbb7f93fc2a572944bea9fe5494.jpeg)
    
    Back to installation page, and wait to install.
    
    ![](media/0da6d0d4296d6e3de0b30dfd3c615265.jpeg)
    
    Successfully installed
    
    ![](media/7cca827fe946096f228797dadce10661.jpeg)
    
    Then enter ArduinoIDE, click **Tools** and select Board **ESP32 Dev
    Module** and **/dev/cu.usbserial-0001**
    
    ![](media/00d823dbf27e569a2ba23277b1e15a41.jpeg)
    
    Click![](media/b7c913eaa4dcea1bc326dd7a7b5a2af6.png) to upload code and show“Done
    uploading”.
    
    **3. How to Add Libraries?**

**(1) What are Libraries ?**

[Libraries ](https://www.arduino.cc/en/Reference/Libraries)are a
collection of code that make it easy for you to connect a
sensor,display, module, etc.

For example, the built-in LiquidCrystal library helps talk to LCD
displays. There are hundreds of additional libraries available on the
Internet for download.

The built-in libraries and some of these additional libraries are listed
in the reference. (https://www.arduino.cc/en/Reference/Libraries)

**(2) How to Install a Library ?**

Here we will introduce the most simple way to add libraries .

**Step 1:** After downloading well the Arduino IDE, you can right-click
the icon of Arduino IDE.

Find the option "Open file location"

![](media/2b05ac39b2ad481965c9384dd5347194.png)

**Step 2:** Click **Open file location** \>libraries

![](media/89211927cafc8f4c735d72c87d9dc05e.png)

**Step 3:** Next, find out the“libraries”folder

(seen in the link: https://fs.keyestudio.com/KS5002)

![](media/c26daeec56d40470236c88e8cb6003be.png)

![](media/ecbd53eae13f686c3b2e48e6359a8d92.png)

Copy ![](media/a37c907c372496e0b082af8c151e1b0e.png)in the libraries folder of Arduino.

Then click“Replace the files in the destination”

![](media/48cc1fcf111ce12c3e174393eee4991d.png)

![](media/6ce316693a4a6b2b0b2d0712219fe7ef.png)




## **Keyestudio ESP32 Core Board**

![](media/d59fe9d9aced2ab49f5b9c6e59d9afde.jpeg)

### Description:

This keyestudio ESP32 core board is a Mini development board based on
the ESP-WROOM-32 module.

The board has brought out most I/O ports to pin headers of 2.54mm pitch.
These provide an easy way of connecting peripherals according to your
own needs.

When it comes to developing and debugging with the development board,
the both side standard pin headers can make your operation more simple
and handy.

The ESP-WROOM-32 module is the industry's leading integrated WiFi +
Bluetooth solution with less than 10 external components.

It integrates antenna switch, RF balun, power amplifiers, low noise
amplifiers, filters and power management modules.

At the same time, it also integrates with TSMC's low-power 40nm
technology, so that power performance and RF performance are safe and
reliable, easy to expand to a variety of applications.

### Technical Details:

  - Microcontroller: ESP-WROOM-32 module

  - USB to Serial Port Chip: CP2102-GMR

  - Operating Voltage: DC 5V

  - Operating Current: 80mA (average)

  - Current Supply: 500mA (Minimum)

  - Operating Temperature Range: -40℃ \~ +85℃

  - WiFi mode: Station/SoftAP/SoftAP+Station/P2P

  - WiFi protocol: 802.11 b/g/n/e/i (802.11n, speed up to 150 Mbps

  - WiFi frequency range: 2.4 GHz \~ 2.5 GHz

  - Bluetooth protocol: conform to Bluetooth v4.2 BR/EDR and BLE
    standards

  - Dimensions: 55mm\*26mm\*13mm

  - Weight: 9.3g
    
    ![](media/4f12fd6a86b4179a4706c57f37b32ee2.jpeg)


3.  **Pin out**
    
    ![](media/faad4453ca14a342def16fdc3d46ef79.png)

Warning: The voltage level of the ESP32 pins is 3.3V. If you want to
connect the ESP32 to other devices that operate at 5V, you should use a
level shifter to convert the voltage levels.

● Power pins: The module has two power pins: +5V and 3.3V. You can use
these two pins to power other devices and modules.

![](media/2a90758b3a2e998d7af545fdbb432f08.png)

● GND pin: There are 3 pins for grounding of this module.

Enable Pin (EN): This pin is used to enable and disable the module. The
module is enabled when the pin is high, and disabled when the pin is
low.

● Input/Output Pins (GPIO): You can use 32 GPIO pins to communicate with
LEDs, switches and other input/output devices.

You can pull up or pull down these pins

Note: GPIO6 to GPIO11 pins (SCK/CLK, SDO/SD0, SDI/SD1, SHD/SD2, SWP/SD3
and SCS/CMD pins) are used for SPI communication of the module's
internal flash memory, we do not recommend using them.

● ADC: You can use the 16 ADC pins on this module to convert analog
voltages (the output of some sensors) into digital voltages. Some of
these converters are connected to internal amplifiers and are capable of
measuring small voltages with high accuracy.

● DAC: The ESP32 module has two A/D converters with 8-bit precision.

● Touch pads: There are 10 pins on the ESP32 module, which are sensitive
to changes in capacitance. You can connect these pins to some pads (pads
on the PCB) and use them as a touch switch.

● SPI: There are two SPI interfaces on this module which can be used to
connect the display screen, the SD / microSD memory card module and
external flash memory, etc.

● I2C: SDA and SCL pins are used for I2C communication.

● Serial communication (UART): There are two UART serial interfaces on
this module. You can transfer information up to 5Mbps between two
devices with these pins. UART0 also has CTS and RTS controls.

● PWM: Almost all ESP32 input/output pins can be used for PWM (Pulse
Width Modulation), which can control motors, LED lights, colors, and
more.

![](media/4e99a4f953b9ede17b5c135232ddb476.png)


## How to install the Beetlebot car

| ![](media/4ea30cc75eb77e63441dccef9f0ca3cb.png)|                     |
|----------------------------------|-----------------------------------|
| Step 1                           |                                   |
|  Components  Required            | ![](media/3b61b733c07695610de4cb3f32f9b5d9.png)|
|                                  | ![](media/ad0752aceb4444c7c643b06baedca508.png) |
|                                  | ![](media/f06af3e05a32db670f6703f3e3330478.png)|
|                                  |                                  |
| Step 2                           |                                  |
| Components Required              | ![](media/f21ec5ac9d0b2e672bf009cee1b7e35a.png)|
|                                  | ![](media/a4cb560311b31c6c8c86e61fa5b9db60.png)|
|                                  | ![](/media/ee3f3763d793da1f2526541fac2e4682.png)|
|                                  |                                  |
| Step 3                           |                                  |
| Components Required              | ![](/media/c6dd07061178ceded060394e52cf02e5.png)|
|                                  | ![](media/f7ab8e0953dff01da096cbca3e231019.png)|
|                                  | ![](media/40ad0050e64bc94e661cab28a2cb3417.png)|
|                                  |                                  |
| Step 4                           |                                  |
|  Components Required             | ![](/media/5017f2c7daa592240db18820429f7cce.png)|
|                                  | ![](media/835e416adf6cc57223c4a8fad5ffbbcf.png)|
|                                  | ![](media/301a9ae6749406c807d0378fc6786689.png)|
|                                  |                                  |
| Step 5                           |                                  |
| Components Required              | ![](/media/20ddfa74ae730a9a495ddb4ea826379f.png)|
|                                  |                                  |
+----------------------------------+----------------------------------+
| Connect the motor and the 8\*8   |                                  |
| dot matrix display to PCB boards |   Left motor   Right motor       |
|                                  |   L            R                 |
|                                  | ![](media/b5050fefaa202c9c9b8d0d34f4015fee.jpeg) |
|                                  |   8\*8 display   PCB board       |
|                                  |   G              G               |
|                                  |   5V             5V              |
|                                  |   SDA            SDA             |
|                                  |   SCL            SCL             |
|                                  | ![](media/2312e7cfe8638ea900a1337fbda25ee3.jpeg) |
|                                  | ![](media/2dceab5192afb70da7ba00b05aea0429.png) |
|                                  | ![](media/42b694c90c72933e2f171e6f834b34f3.png) |
|                                  |                                  |
| Step 6                           |                                  |
| Components Required              | ![](media/2b8b0867167b862c2daf6d56ac6f9995.png) |
|                                  | ![](media/7de39b1282f3e7ebad2e0ff54e6103fd.png) |
|                                  | ![](media/af8dea5e9b35c687e17d2ad7e72117dc.png) |
|                                  |                                  |
| Step 7                           |                                  |
|                                  |                                  |
| Components Required              | ![](media/d1a3e67364542c332e005604c538fb57.png) |
|                                  | ![](media/840802a6da35b750d4218591e4d50455.png) |
|                                  | ![](media/4275b8027974e7dfc2d3d66ffbc82814.png) |
|                                  |                                  |
| Step 8                           |                                  |
| Components Required              | ![](/media/c9dde621dbdefbac05ef73b211a1290f.png) |
|                                  | ![](/media/52a5e3be34bb79ffd9506c77c3a65426.png) |
|                                  | ![](/media/0c84b5e7efb6789158b552c292b4e618.png) |
|                                  |                                  |
| Step 9                           |                                  |
| Components Required              | ![](/media/731c86727e5056cf10f22e5a03a0a62a.png) |
| Adjust the angle of the servo to |                                  |
| 90 degree before installing the  |   Servo         PCB              |
| car                              |   Brown line    G                |
|                                  |   Red line      5V               |
|                                  |   Orange line   S1（GPIO4）      |
|                                  |                                  |
|                                  |                                  |
|                                  | Method 1：Arduino                |
|                                  |                                  |
|                                  | Copy the above code to the main  |
|                                  | board of the Beetlebot car; or   |
|                                  | you can check this code as follows;|
|                                  | ![](media/4e90d56c4011412578b536ad23eb3bf1.png) |
|                                  |                                  |
|                                  | Method 2：Scratch-KidsBlock code |
|                                  | You also can adjust the initial  |
|                                  | angle of the servo via           |
|                                  | Scratch-KidsBlock code.          |
|                                  | ![](media/5a4f70f56e39445c93b0e2adb0bc5be4.png) |
|                                  |                                  |
|                                  | Or you can get it in the         |
|                                  | following folder                 |
|                                  | ![](media/ae735ca5c3c8804c81541a2c611dfe12.png) |
|                                  |                                  |
|                                  | Method 3：MicroPython code       |
|                                  | How to get it                    |
|                                  | ![](media/8e7458e234e6edb0ac25a1fd36dc0ce4.png) |
|                                  | ![](media/3fd9a1f4b613d8c04ef06b9a315f2aac.png) |
|                                  |                                  |
| Step 10                          |                                  |
| Components Required              | ![](/media/23910e2b0e0c8df032ffa058efdabd34.png) |
|                                  | ![](/media/ae79ebd3f9bf193a0a59107fbd2d32ed.png) |
|                                  | ![](/media/16299cf9e63bac735aaea054569a0aae.png) |
|                                  |                                  |
| Step 11                          |                                  |
| Components Required              | ![](media/7f2728e7e4161633c331a52eaa243065.png) |
|                                  | ![](media/78fecc57dd31303e57e2e1f926bf12be.png) |
|                                  | ![](media/3477b3d66243427a1873a353d9a1f9af.png) |
| Wire up                          |                                  |
| Wire up the ultrasonic sensor    |                                  |
|                                  |                                  |
|                                  |   Ultrasonic Sensor   PCB        |
|                                  |   Vcc                 5V         |
|                                  |                                  |
|                                  |  Trig                S2（GPIO5） |
|                                  |                                  |
|                                  | Echo                S1（GPIO18） |
|                                  |   Gnd                 G          |
|                                  |                                  |
|                                  |                                  |
|                                  |                                  |
|                                  | ![](media/2720ef74b3985cadbf257f982f55310a.jpeg) |
| Wire up the servo                |                                  |
|                                  |   Servo         PCB              |
|                                  |   Brown line    G                |
|                                  |   Red line      5V               |
|                                  |   Orange line   S1（GPIO4）      |
|                                  | ![](media/8b1aa4a30b8a647edfa7af5b59c986c9.jpeg) |
| Wire up the left photoresistor   |                                  |
|                                  |                                  |
|                                  |   Left photoresistor   PCB       |
|                                  |   G                    G         |
|                                  |   V                    V         |
|                                  |   S                    S（GPIO34） |
|                                  | ![](media/49f90ac654252e8582f573214e9cd1aa.jpeg) |
| Wire up the right photoresistor  |                                  |
|                                  |   right photoresistor   PCB      |
|                                  |   G                     G        |
|                                  |   V                     V        |
|                                  |   S                              |
|                                  |                      S（GPIO35） |
|                                  | ![](media/47071f52bbc35e946d88eb9233091ccd.jpeg) |
|                                  | ![](media/155ae47c5ee8e30f180c4a64d8f25dc1.jpeg) |


## Install a soccer goal 

|                                  |                                  |
|----------------------------------|----------------------------------|
| Step 1                           |                                  |
|  Required Parts                  | ![](media/0fc16ff134aa3503319d4101362338d8.png) |
+----------------------------------+----------------------------------+
|                                  | ![](media/1bd86df44aba070fea465a1da26df9e9.png) |
|                                  | ![](media/f3749804b3ac033cfdd7b4423ddea660.png) |
| Step 2                           |                                  |
|  Required Parts                  | ![](media/8d3f4c81812931c8cb3140c5fc33aa1a.png) |
|                                  | ![](media/dcc81f3f50258615595745676921b34c.png) |
|                                  | ![](media/567e873c86303e9e7ef0f6c919ae8fac.png) |
|                                  |                                  |
| Step 3                           |                                  |
|  Required Parts                  | ![](media/99d485c0ce81fe195bd9d4282403b8f1.png) |
|                                  | ![](media/5d749f5431468ffc7be947dfafd68223.png) |
|                                  | ![](media/89031df8ec6afe07c8e58fe26a2974c4.png) |
| Then the soccer goal is          |                                  |
| installed well.                  |                                  |


## Install the soccer robot

|                                  |                                  |
|----------------------------------|----------------------------------|
| **Install the soccer robot**     |                                  |
| Step 1                           |                                  |
| Remove two photoresistors        | ![](media/5e64e86f88135f370916439bbabb2d5a.png) |
| Required Parts                   | ![](media/52bddcd05b409305adfbb39a9af55ee6.png) |
|                                  | ![](media/448e4708895f49afd985391c8ac0cd04.png) |
|                                  | ![](media/448e4708895f49afd985391c8ac0cd04.png) |
|                                  |                                  |
| Step 2                           |                                  |
| Required Parts                   | ![](media/b7ca00b9d07fc08780f5e6e39595d974.png) |
|                                  | ![](media/d124cb9095a9cecb1eea4c9b565da3dd.png) |
|                                  | ![](media/ef1331144242e5bc24bc426842d98573.png) |
|                                  |                                  |
| Step 3                           |                                  |
| Required Parts                   | ![](media/2520ee435d034c60b66058e4bacfadb6.png) |
|                                  | ![](media/1d88fd0c5f6b4aff89c3900b3df5533d.png) |
|                                  | ![](media/d05ab09c6662e3fb4d62be4f355a91be.png) |
|                                  |                                  |
| Step 4                           |                                  |
|                                  |                                  |
| Required Parts                   | ![](media/82c5dd6fbe0818dbdbaf33ee0b019215.png) |
|                                  | ![](media/5964ab1fd800a0522923960dd32be299.png) |
|                                  | ![](media/29abea2f58433515043942fd37af34e7.png) |
|                                  |                                  |
| Step 5                           |                                  |
| Required Parts                   | ![](media/91e35080c03e1ca03b2a58b71da76e43.png) |
|                                  | ![](media/a643659079fdbf1433bb40658a590675.png) |
|                                  | ![](media/9ec78ee08c51b297ccaa34b13fa8ae8d.png) |
|                                  |                                  |
| Step 6                           |                                  |
| Required Parts                   | ![](media/d3ae331c69d05147a98b9d8353496a9f.png) |
|                                  |                                  |
| Note the installation direction  |                                  |
| of the part marked by the red circle | ![](media/77092cee1e554dc3b259b2a1ef7f6e4e.png) |
|                                  | ![](media/f939d187c78455662d9c3fd3bc77d8b7.png) |
|                                  |                                  |
| Step 7                           |                                  |
| Required Parts                   | ![](media/f2a0fea032c9ca807196bae481054b82.png) |
|                                  | ![](media/e9fb139ce5954ee5d0cc32028b15d1a4.png) |
|                                  | ![](media/dc849d125d6cf7748725d369ca39b6f2.png) |
|                                  |                                  |
| Step 8                           |                                  |
| Required Parts                   | ![](media/f45d4a0edb9caf49703f6a14061d3356.png) |
| Adjust the angle of the claw.    |                                  |
| Then make it close and face front | ![](media/d65a5580f2fc3292ad22005e1b480a3c.png) |
|                                  | ![](media/54d2787ec549a6d651753475ca760f6b.png) |
|                                  |                                  |
| Step 9                           |                                  |
| Required Parts                   | ![](media/f410d612e4ea08f789b5f8c2fe625947.png) |
| Set the angle of the servo to    | Wire Up {#wire-up}               |
| 180 degree                       |                                  |
|                                  |   Servo    PCB Board             |
|                                  |   Brown    G                     |
|                                  |   Red      5V                    |
|                                  |   Orange   S2（GPIO23）          |
|                                  |                                  |
|                                  | Upload the code of the servo to  |
|                                  | the main board of the Beetlebot  |
|                                  | car, as shown below              |
|                                  | ![](media/28e5c971d2eb4d3b805dd29139e2dccd.png) |
|                                  |                                  |
|                                  | You can also initialize the      |
|                                  | angle of the servo through the   |
|                                  | following code                   |
|                                  | ![](media/00f77a1d94aaae5bc1b8b68e6bc6fa60.png) |
|                                  |                                  |
|                                  | Check the Scratch-KidsBlock code |
|                                  | as follows，then upload the code |
|                                  | to the main board of the         |
|                                  | Beetlebot car                    |
|                                  | ![](media/abb91e8d0440ec47744594ff904d957c.png) |
| Keep the claw close and face     | ![](media/e7d79896568d0f97ad08aeee6a69aec1.png) |
|                                  | ![](media/ad193ecc917138ddb44328e10ef19654.png) |
|                                  |                                  |
| Step 10                          |                                  |
| Required Parts                   | ![](media/90986cacd92570cdd76b437df5e1b916.png) |
|                                  | ![](media/228346c56280be9b2516abd39c9fa7c7.png) |
|                                  | ![](media/3b9a3a2fce95bcf48fc833aed69fe4b6.png) |
|                                  |                                  |
| Step 11                          |                                  |
| Required Parts                   | ![](media/68d76c258157e550ea345fecc3d97342.png) |
|                                  | ![](media/31805e285ab9d3c8b487fe769c97574b.png) |
|                                  | ![](media/4a59747ea4ecc8e8eb328935007684b4.png) |
|                                  | ![](media/3b9a3a2fce95bcf48fc833aed69fe4b6.png) |
| Wiring Diagram                   |                                  |
| Wire up the LEGO servo           | ![](media/4a7b89134d7aa5897733fa0ab411872c.jpeg) |


## Install the catapult

|                                  |                                  |
|----------------------------------|----------------------------------|
| **How to install the catapult*   |                                  |
| Step 1                           |                                  |
| Required components              | ![](media/ef12c46a8dc6e5f5c7f7ee6fc3c3dc55.png) |
|                                  | ![](media/85116f87b7e67a5ab0de47507da771aa.png) |
|                                  | ![](media/bb5d2d9bc07a9cfdc997f798c6c56eca.png) |
|                                  |                                  |
| Step 2                           |                                  |
| Required components              | ![](media/d827f9196a2aed7686c9d767e64b7f66.png) |
|                                  | ![](media/7e4fed5d035aac6b58ee79afd3aca1a1.png) |
|                                  | ![](media/088c8c481e0b48b3625f465a4ceed269.png) |
|                                  |                                  |
| Step 3                           |                                  |
| Required components              | ![](media/52da40da0bbeae39083c81a57c1117e6.png) |
|                                  | ![](media/42004639ab3aaca47c5121bf7ac18a2d.png) |
|                                  | ![](media/08f91fa357f53479f8a121bd2b6d8883.png) |
|                                  |                                  |
| Step 4                           |                                  |
| Required components              | ![](media/1678f2dcaaed186ba12fbcbc9a6d34c2.png) |
|                                  | ![](media/8b54d0c59f13bbbc54fafefec90bbb24.png) |
|                                  | ![](media/b2900c9594fb64b10ee734e2a533cfbf.png) |
|                                  |                                  |
| Step 5                           |                                  |
| Required components              | ![](media/9975825da874d5431f9e672ca9a4479e.png)  |
|                                  | ![](media/5c41a82613abc2c43016fb25edc5c68c.png)  |
|                                  | ![](media/08ebb224d83a88b37ebd8b5cb80bb3ad.png)  |
|                                  |                                  |
| Step 6                           |                                  |
| Required components              | ![](media/9c247eddce7a872899c34e013e12db31.png)  |
|                                  | ![](media/3a2946b85862bf346ffab23458553bb3.png)  |
|                                  | ![](media/531619d92526f175188479be5fe9c403.png)  |
|                                  |                                  |
| Step 7                           |                                  |
| Required components              | ![](media/76541a6311535fd572743b0ad47f1254.png)  |
|                                  | ![](media/a75726411d9f0bcccda1600a3f3b3cdc.png)  |
|                                  | ![](media/216440c8133bb1fa5f9670d084815ee6.png)  |
|                                  |                                  |
| Step 8                           |                                  |
|                                  |                                  |
| Required components              | ![](media/7e7a7032c111bbfc5e4a6605abb84dd7.png)  |
|                                  | ![](media/b933ff3a1efee59f590e3d511c1d2864.png)  |
|                                  | ![](media/be75847ab4f10c2750868daf02cad97d.png)  |
|                                  |                                  |
| Step 9                           |                                  |
| Required components              | ![](media/8a0a23b5a1a7a332209e87d032815609.png) |
|                                  | ![](media/5887d93dd221b4c3aeb7dcfe2a466846.png) |
|                                  | ![](media/dae339a4baed35100a3580384bf228db.png) |
|                                  |                                  |
| Step 10                          |                                  |
| Required components              | ![](media/a376478c51daef7b169d65b91257cff1.png)  |
|                                  | ![](media/ea08ecc209960e32eee4c930201c6112.png)  |
|                                  | ![](media/03394d1ec20bdfec33c01fcbaca3272a.png)  |
|                                  |                                  |
| Step 11                          |                                  |
| Required components              | ![](media/ccbf96f8a832f1b7429dd84c5d4345c8.png)  |
|                                  | ![](/media/e4eeea6acd26fc704b516a4eed86d280.png) |
|                                  | ![](media/275b434c0be9b0b29b0414c86f8016dd.png)  |
|                                  |                                  |
| Step 12                          |                                  |
| Required components              | ![](media/b7dcfd9502c3fd7b10667b6c8e02d9c2.png)  |
|                                  | ![](media/0805a74bbabfd014c772223f269034e6.png)  |
|                                  | ![](media/997424695d7920037017741fdbba2fac.png)  |
|                                  |                                  |
| Step 13                          |                                  |
| Required components              | ![](media/6348991aedca79b2dd8d672bf92a11d5.png) |
|                                  | ![](media/a6b15b1c9cf2b4c57eb99613f3b101c4.png)  |
|                                  | ![](media/dc88133e92982bd31fecefee7ad8a7c1.png)  |
|                                  |                                  |
| Step 14                          |                                  |
| Required components              | ![](media/4647a2f97a30479a02a9166625ff8691.png)  |
|                                  | ![](media/cca8268d5c1cea871a6724f38440bf44.png)  |
|                                  | ![](media/ff899bedee462220afed7d6b57e5c4fb.png)  |
|                                  |                                  |
| Step 15                          |                                  |
| Required components              | ![](media/2ff9dd7a9593ae1d87ee1ef78f5ec79c.png)  |
|                                  | ![](media/2c0b652b42d4695eaeaf57802f7d0ab7.png)  |
|                                  | ![](media/7e28f9049c1d8081f7bb24b07c75471f.png)  |
|                                  |                                  |
| Step 16                          |                                  |
| Required components              | ![](media/f62f9d4b93b1b0ac66738baa034e710d.png)  |
|                                  | ![](media/3f1f8d3bfd3dd6c810d55ffceefe6ca3.png) |
|                                  | ![](media/857bff0ba903623bc8d3a44d6410d828.png)  |
|                                  |                                  |
| Step 17                          |                                  |
| Required components              | ![](media/4d37a7993b087fe97734443ddb940941.png)  |
| Set the angle of the servo to    | Wire servo up                    |
| 180 degree                       |                                  |
|                                  |   Servo    PCB Board             |
|                                  |   Brown    G                     |
|                                  |   Red      5V                    |
|                                  |   Orange   S2（GPIO23）          |
|                                  | Upload the code of the servo to  |
|                                  | the main board of the Beetlebot  |
|                                  | car, as shown below              |
|                                  | ![](media/6c4fa9b5cae50d4f4596936d418def99.png) |
|                                  |                                  |
|                                  | You can also initialize the      |
|                                  | angle of the servo through the   |
|                                  | following code                   |
|                                  | ![](media/058b30d50392dbafa6b7bda5d47f2d25.png) |
|                                  |                                  |
|                                  | Check the Scratch-KidsBlock code |
|                                  | as follows，then upload the code |
|                                  | to the main board of the         |
|                                  | Beetlebot car                    |
|                                  | ![](media/c0a1ff518c65d168f4ec2fdaf9f8ea71.png) |
|                                  | ![](/media/9f5a242786bc3789adf9cf5e18b8ba51.png) |
|                                  | ![](media/ac803fd31a550ed4dd380b0684019011.png) |
| Step 18                          |                                  |
| Required components              | ![](media/b3f95a18ac4bc0caa38a2247766520cf.png) |
|                                  | ![](media/9cce844758b800937ca64b05aff685d8.png) |
|                                  | ![](media/35a51fcf6c258efb5b657d54bb3de756.png) |
| Wire up                          |                                  |
| Interface the servo              | ![](media/89fd41d160d778d0a7ef66c90fd28889.jpeg) |
|                                  |                                  |


## How to install the handling robot

|                                  |                                  |
|----------------------------------|----------------------------------|
| How to                           |                                  |
|  install the handling robot      |                                  |
| Step 1                           |                                  |
| Dismantle the ultrasonic sensor  | ![](media/f05a58fdd61093240a78a884d2484bab.png)  |
| Required components              | ![](media/1f8438657adee5ee0931a2e0db8c8d79.png)  |
|                                  | ![](/media/b9cb95a5c53ab96b85b41d648c19534f.png) |
|                                  | ![](media/502348fe825fa6e57cd61d1700c93c0f.png)  |
| Step 2                           |                                  |
| Required components              | ![](media/6ce5dc24243321d0d31e385997059e21.png)  |
|                                  | ![](media/d33b93e264a8c2833ce2b3d4dcd91517.png)  |
|                                  | ![](media/c9a151d3856720e100dabe436d62d230.png)  |
|                                  |                                  |
| Step 3                           |                                  |
|                                  |                                  |
| Required components              | ![](media/a2b2a96f444801e2da559161cc5b2b65.png)  |
|                                  | ![](media/077d7de8e6260998b60e008593bff7e5.png)  |
|                                  | ![](media/a9a493a264445b0feab48159837fe725.png)  |
|                                  |                                  |
| Step 4                           |                                  |
| Required components              | ![](media/a86c18982b0afaa1921a3b0072989a95.png)  |
|                                  | ![](media/0f804e35e2f7dc6e2a028d21f21e392e.png)  |
|                                  | ![](media/4a759b55f056a6cd9dfdee0cece5dfd1.png)  |
|                                  |                                  |
| Step 5                           |                                  |
| Required components              | ![](media/e99bf266cf59d343b34f2cca10de5b49.png)  |
|                                  | ![](media/ce5e3e8e4548aba8fad60910214bcca6.png)  |
|                                  | ![](media/9b2185eaf2f66f35b57754d5476b1ddd.png)  |
|                                  |                                  |
| Step 6                           |                                  |
| Required components              | ![](media/4dfd662862d57090e60b71b18cd3291f.png)  |
|                                  | ![](/media/7164d7dd08e97a62bc77ae08aadf1526.png) |
|                                  | ![](media/1cccaf2a536170c11bbc4cdf7683484a.png) |
|                                  |                                  |
| Step 7                           |                                  |
| Required components              | ![](media/7d3e50e74ae36545217c4fa15a53d04e.png)  |
|                                  | ![](media/7d32a51858167fd8aee486b72f287ae3.png)  |
|                                  | ![](media/83dbaa2175018608dc84f4dda726fa96.png) |
|                                  |                                  |
| Step 8                           |                                  |
| Required components              |                                  |
|                                  | ![](media/6e73265906657a00ca17c5323f65dcec.png) |
|                                  | ![](media/f60d276bb389be3c440b15adea292adf.png) |
|                                  | ![](media/86f43f7d15cfb6c4ac807423b2510de0.png)  |
|                                  |                                  |
| Step 9                           |                                  |
| Required components              | ![](media/df4b2ab9b8ad767b948de6f783a0cf42.png) |
| Set the angle of the servo to    | Wire servo up    |
| 180 degree                       |                                  |
|                                  |   Servo    PCB Board             |
|                                  |   Brown    G                     |
|                                  |   Red      5V                    |
|                                  |   Orange   S2（A0）              |
|                                  | Upload the code of the servo to  |
|                                  | the main board of the Beetlebot  |
|                                  | car, as shown below              |
|                                  | ![](media/df4f508eafb8eef145740fc8bd78c33f.png) |
|                                  |                                  |
|                                  | You can also initialize the      |
|                                  | angle of the servo through the   |
|                                  | following code                   |
|                                  | ![](media/00f77a1d94aaae5bc1b8b68e6bc6fa60.png) |
|                                  |                                  |
|                                  | Check the Scratch-KidsBlock code |
|                                  | as follows，then upload the code |
|                                  | to the main board of the         |
|                                  | Beetlebot car                    |
|                                  | ![](/media/b6fd32aa9ce786469388a6f5cb543240.png) |
|                                  | ![](media/014d0f844d18f7bbd2a80b7f1679fca1.png) |
|                                  | ![](media/e66813dd3c1884b0c1f65bdf3f5b8c48.png)  |
|                                  |                                  |
| Step 10                          |                                  |
| Required components              | ![](media/13c2436b53b5dab5f508e902bcb6b0cf.png) |
|                                  | ![](media/20149b66db795ce32fcb060a0823bab0.png) |
|                                  | ![](media/b97e180d74ce41e7293acfe85a0b1bd7.png)  |
|                                  | ![](media/b9cb95a5c53ab96b85b41d648c19534f5.png)  |
|                                  | ![](media/87076fbdd533d91c88fa7ae5cd5df32e.png) |
|                                  | ![](media/89d2a853cf95635fae60b5ec48482d54.png) |
| Wire up servo                    |                                  |
|                                  | ![](media/d21937e59f71e552c4deb19e1a91b6d3.jpeg) |

# **Keyestudio Beetlebot 3 in1 Robot for Arduino STEM Education**

## Description： 


The Beetlebot smart robot, compatible with LEGO building blocks, is a STEM educational product which can automatically dodge obstacles, follow black lines and light to move. Besides, it has three cool forms such as the soccer robot, the siege robot, the handling robot. As for beginners, they can create whatever
they want by LEGO building blocks.

Various improvements have been made on the Beetlebot car in comparison with other smart cars. It integrates a motor driver and a large number of sensors
and is easy to assemble.

Going forward, not only can it impart basic programming knowledge and AI
application to children and the youth, but also it can cultivate their
creativity, hands-on ability, problem-solving capability, interpersonal
communication as well as teamwork ability. With this kit, you have a
chance to experience soccer games using your own robots.

Features： 

-   Compatible with LEGO building blocks: generate diverse forms with
    LEGO blocks and sensors

-   Three forms: a soccer robot, a siege engine, a handling robot

-   Various functions: Pictures display, atmosphere light control, line
    tracking, obstacle avoidance, light following , IR control and WIFI
    control.

-   Easy to build: embedded design on car body; wire up the car body
    with a few steps

-   High compatibility: reserve ports for the Raspberry Pico board and
    the Arduino Nano board

-   Charging function: integrate a circuit for 18650 batteries, low-cost
    and effective

-   WiFi Control: adopt WiFi control, can finish tailor-made software
    development

-   App: compatible with Android and iOS systems, with aesthetic page
    and flexible control system

3. Specification： 
==================

Working voltage: 5V

Input voltage: 2.5V~4.2V (lithium battery)

Maximum output current: 3A

Maximum power consumption: 15W (T=80℃)

Motor speed: 5V 200 rpm / min

Motor drive form: dual H-bridge

Ultrasonic sensing angle: &lt;15 degrees

Ultrasonic detection distance: 2cm-400cm

IR control distance: about 7 meters (measured)

Size: 176mm\*137mm\*130mm

Environmental protection attributes: ROHS

How to install the Beetlebot car： 
==================================

![](media/7daabc13c0fbac0ff936a5d26f300f3e.png)

6. PCB Board： 
==============

![](media/7a101d142fecfe0d47e12a3897dd632d.png)


![](media/f30dfbb6347df2336aae511ecac5be31.png)


**Turn the DIP switch to the OFF end before installing or removing
batteries**

7. Arduino Libraries and the CP2102 Driver： 
============================================

Refer to the **Get started with Arduino** folder to gain access to more
details about adding libraries and the CP2102 driver

If Arduino libraries and the CP2102 driver are added, just skip this
step.

![](media/878363aa4f635f191100fcc9ec64a60a.png)

**Projects：** 
==============

Project 1: 6812 RGB 
-------------------

1.  **Description：**

There are 4 RGB LEDs can be widely used in the decoration of buildings,
bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with
them.

**2. Knowledge：**

**Working Principle**

From the schematic diagram, we can see that these four pixel lighting
beads are all connected in series. In fact, no matter how many they are,
we can use a pin to control a light and let it display any color. The
pixel point contains a data latch signal shaping amplifier drive
circuit, a high-precision internal oscillator and a 12V high-voltage
programmable constant current control part, which effectively ensures
the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method.
After the pixel is powered up and reset, the S terminal receives the
data transmitted from the controller. The first 24bit data sent is
extracted by the first pixel and sent to the data latch of the pixel.

![](media/86e292d0666046b72a1e0e68adfb17e8.png)


**3. Test Code：**

The SK6812RGB on the PCB board is controlled by the GPIO 14 of the ESP32
board

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 01 SK6812 RGB</p>
<p>4 RGBs for various lighting effects.</p>
<p>*/</p>
<p>#include &lt;Adafruit_NeoPixel.h&gt;</p>
<p>#define PIN 14</p>
<p>// Parameter 1 = number of pixels in strip</p>
<p>// Parameter 2 = Arduino pin number (most are valid)</p>
<p>// Parameter 3 = pixel type flags, add together as needed:</p>
<p>// NEO_KHZ800 800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)</p>
<p>// NEO_KHZ400 400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)</p>
<p>// NEO_GRB Pixels are wired for GRB bitstream (most NeoPixel products)</p>
<p>// NEO_RGB Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)</p>
<p>Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);</p>
<p>// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across</p>
<p>// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input</p>
<p>// and minimize distance between Arduino and first pixel. Avoid connecting</p>
<p>// on a live circuit...if you must, connect GND first.</p>
<p>void setup() </p>
<p>void loop() </p>
<p>// Fill the dots one after the other with a color</p>
<p>void colorWipe(uint32_t c, uint8_t wait) </p>
<p>}</p>
<p>void rainbow(uint8_t wait) </p>
<p>strip.show();</p>
<p>delay(wait);</p>
<p>}</p>
<p>}</p>
<p>// Slightly different, this makes the rainbow equally distributed throughout</p>
<p>void rainbowCycle(uint8_t wait) </p>
<p>strip.show();</p>
<p>delay(wait);</p>
<p>}</p>
<p>}</p>
<p>//Theatre-style crawling lights.</p>
<p>void theaterChase(uint32_t c, uint8_t wait) </p>
<p>strip.show();</p>
<p>delay(wait);</p>
<p>for (int i=0; i &lt; strip.numPixels(); i=i+3) </p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>//Theatre-style crawling lights with rainbow effect</p>
<p>void theaterChaseRainbow(uint8_t wait) </p>
<p>strip.show();</p>
<p>delay(wait);</p>
<p>for (int i=0; i &lt; strip.numPixels(); i=i+3) </p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>// Input a value 0 to 255 to get a color value.</p>
<p>// The colours are a transition r - g - b - back to r.</p>
<p>uint32_t Wheel(byte WheelPos)  else if(WheelPos &lt; 170)  else </p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

1.  **Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up with a USB cable, then 4 RGB LEDs will show different colors

![](media/1905c4220c81d37711556fc1d062a05d.png)

Project 2: Play Music 
---------------------

1.  **Description：**

There is a power amplifier component on the expansion board, which is
often used to play music and serve as an external amplifying device for
music playback devices.

In this experiment, we use the speaker amplifier component to play
music.

**2. Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have
internal oscillation circuits.

The power amplifier module can chime sounds with different frequency
when power it up.

**3. Test Code：**

The speaker component on the PCB board is controlled by the GPIO 2 of
the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 02 Buzzer</p>
<p>Buzzer plays music</p>
<p>*/</p>
<p>#define LEDC_CHANNEL_0 0</p>
<p>//LEDC timer uses 13-bit precision</p>
<p>#define LEDC_TIMER_13_BIT 13</p>
<p>// define the IO port</p>
<p>#define BUZZER_PIN 2</p>
<p>//Create a list of music melodies, Super Mario</p>
<p>int melody[] = ;</p>
<p>//Create a list of tone durations</p>
<p>int noteDurations[] = ;</p>
<p>void setup() </p>
<p>void loop() </p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up with a USB cable, then the speaker module on the PCB board will
play a song.

![](media/1905c4220c81d37711556fc1d062a05d.png)

Project 3: 8\*8 Dot Matrix Display 
----------------------------------

1.  **Description：**

    Composed of LED emitting tube diodes, the 8\*8 LED dot matrix are
    applied widely to public information display like advertisement
    screen and bulletin board, by controlling LED to show words,
    pictures and videos, etc.

    **2. Knowledge：**

There are different types of matrices, including 4×4, 8×8 and 16×16 and
etc. It contains 64 LEDs.

The inner structure of 8×8 dot matrix is shown below.

![](media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line.
When the voltage on a row line increases, and the voltage on the column
line reduces, the LED on the cross point will light up. 8×8 dot matrix
has 16 pins. Put the silk-screened side down and the numbers are 1, 8, 9
and 16 in anticlockwise order as marked below.

![](media/6576aff8e8a7fb35335629c2f60de29b.jpeg)


The definition inner pins are shown below:

![](media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, you should
increase the voltage of pin 9 and reduce the voltage of pin 13.

**HT16K33 8X8 Dot Matrix**

The HT16K33 is a memory mapping and multi-purpose LED controller driver.
The max. Display segment numbers in the device is 128 patterns (16
segments and 8 commons) with a 13\*3 (MAX.) matrix key scan circuit. The
software configuration features of the HT16K33 makes it suitable for
multiple LED applications including LED modules and display subsystems.
The HT16K33 is compatible with most microcontrollers and communicates
via a two-line bidirectional I2C-bus.

The picture below is the working schematic of HT16K33 chip

![](media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)


We design the drive module of 8\*8 dot matrix based on the above
principle. We could control the dot matrix by I2C communication and two
pins of microcontroller, according to the above diagram.

**3. Specification:**

-   Input voltage: 5V    

-   Rated input frequency: 400KHZ 

-   Input power: 2.5W  

-   Input current: 500mA  

    **4. Introduction for Modulus Tool**

The online version of dot matrix modulus tool:

[http://dotmatrixtool.com/\#](http://dotmatrixtool.com/)

①Open the link to enter the following page.

![](media/354693b5679a2615c62e99b7025d6355.png)


②The dot matrix is 8\*8 in this project. So set the height to 8, width
to 8; as shown below.

![](media/501ba516e4be9c8ec4ca6f37e2b6915f.png)

③Click **Endian** to select **Big Endian**(MSB)

![](media/1215ba2c27a8c08e4a4bef90b2c53f7d.png)


③ Generate hexadecimal data from the pattern

As shown below, the left button of the mouse is for selection while the
right is for canceling. Thus you could use them to draw the pattern you
want, then click **Generate**, to yield the hexadecimal data needed.

![](media/32e674da893cc93cd1330a9da73269cb.png)


The generated hexadecimal code（0x00, 0x66, 0x00, 0x00, 0x18, 0x42,
0x3c, 0x00) is what will be displayed, so you need to save it for next
procedure.

**2. Wiring up：**

|                         |           |
|-------------------------|-----------|
| 8\*8 Dot matrix display | PCB Board |
| G                       | G         |
| 5V                      | 5V        |
| SDA                     | SDA       |
| SCL                     | SCL       |

**3. Test Code：**

The 8\*8 dot matrix is controlled by GPIO21（SDA）and GPIO22（SCL）of
the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 03 8*8 Dot Matrix</p>
<p>8*8 dot matrix screen to display patterns</p>
<p>*/</p>
<p>#include "HT16K33_Lib_For_ESP32.h"</p>
<p>#define SDA 21</p>
<p>#define SCL 22</p>
<p>ESP32_HT16K33 matrix = ESP32_HT16K33();</p>
<p>//The brightness values can be set from 1 to 15, with 1 darkest and 15 brightest</p>
<p>#define A 15</p>
<p>byte result[8][8];</p>
<p>byte test1[8] = ;</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>for (int i = 7; i &gt; 0; i--)</p>
<p></p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up by a USB cable, the 8\*8 dot matrix display will show show
“❤”pattern.

Project 4: Servo Rotation 
-------------------------

1.  **Description：**

There are two servos on the car. We take the servo connected to pin D9
as an example.

The servo is a motor that can rotate very accurately. It has been widely
applied to toy cars, remote control helicopters, airplanes, robots and
other fields. In this project, we will use the Nano motherboard to
control the servo to spin.

1.  **Knowledge：**

![](media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of
a housing, a circuit board, a core-less motor, a gear and a position
sensor. Its working principle is that the servo receives the signal sent
by MCU or receiver and produces a reference signal with a period of 20ms
and width of 1.5ms, then compares the acquired DC bias voltage to the
voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate
through the cascade reduction gear, which leads that the voltage
difference is 0, and the motor stops rotating. Generally, the angle
range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty
cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM
signal is 20ms (50Hz). Theoretically, the width is distributed
between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width
corresponds the rotation angle from 0° to 180°. But note that for
different brand motors, the same signal may have different rotation
angles. 

![](media/708316fde05c62113a3024e0efb0c237.jpeg)


In general, servo has three lines in brown, red and orange. The brown
wire is grounded, the red one is a positive pole line and the orange one
is a signal line.

![](media/35084ae289a08e35bdb8c89ceb134ba4.png)

1.  **Wire up：**

|        |             |
|--------|-------------|
| Servo  | PCB Board   |
| Brown  | G           |
| Red    | 5V          |
| Orange | S1（GPIO4） |

1.  **Test Code：**

The servo for controlling the ultrasonic sensor is controlled by the
GPIO4 of the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 04.1 Servo Rotation</p>
<p>the plastic arm of the servo will rotate at an angle of 0°,45°,90°,135°,and180°,repeatly.</p>
<p>*/</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>// Servo channel</p>
<p>int channel_PWM = 3;</p>
<p>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</p>
<p>int freq_PWM = 50;</p>
<p>// PWM resolution, the value is between 0-20, here is 10, then the pwm value filled in the following ledcWrite is between 0-2 to the 10th power, that is, 0-1024.</p>
<p>int resolution_PWM = 10;</p>
<p>//</p>
<p>const int PWM_Pin = 4;</p>
<p>void setup() </p>
<p>void get_pwm_info()</p>
<p></p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

1.  **Test Result：**

Upload the test code to the ESP32 board, and power up with a USB cable,
open the monitor and set baud rate to 115200. Then the arm of the servo
will rotate to 0°, 45°, 90°, 135° and 180°

![](media/6baa65d940e13c872a13b101e243cccc.png)


In fact, we can also have a simpler way to control the servo, that is to
use the servo library file of Arduino ESP32, you can refer to the
official Arduino instructions for
use：<https://www.arduino.cc/en/Reference/Servo> .

1.  **Test Code 2：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 04.2 Servo Rotation</p>
<p>the servo will rotate from 0 degrees to 180 degrees and then reverse</p>
<p>the direction to make it rotate from 180 degrees to 0 degrees and</p>
<p>repeat these actions in an endless loop.</p>
<p>*/</p>
<p>#include &lt;ESP32Servo.h&gt;</p>
<p>Servo myservo; // create servo object to control a servo</p>
<p>int posVal = 0; // variable to store the servo position</p>
<p>int servoPin = 4; // Servo motor pin</p>
<p>void setup() </p>
<p>void loop() </p>
<p>for (posVal = 180; posVal &gt;= 0; posVal -= 1) </p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up with a USB cable, the arm will rotate from 0° to 180°, then
from 180° to 0°

Project 5: Motor Driving and Speed Control  
------------------------------------------

1.  **Description：**

There are many ways to drive motors. This car uses the most commonly
used DRV8833 motor driver chip, which provides a dual-channel bridge
electric driver for toys, printers and other motor integration
applications.

In this experiment, we use the DRV8833 motor driver chip on the
expansion board to drive the two DC motors, and demonstrate the effect
of forward, backward, left-turning, and right-turning.

1.  **Knowledge：**

DRV8833 motor driver chip: Dual H-bridge motor driver with current
control function, can drive two DC motors, one bipolar stepper motor,
solenoid valve or other inductive loads. Each H-bridge includes
circuitry to regulate or limit winding current.

An internal shutdown function with a fault output pin is used for
over-current and short circuit protection, under-voltage lockout and
over-temperature. A low-power sleep mode is also added. Let's take a
look at the schematic diagram of the DRV8833 motor driver chip driving
two DC motors:

![](media/bc839fa0f37fdc3003485b0398dd6d1f.png)


![](media/9cb8b7c00f814e367040f2ed4a3c9f4a.png)


If you want to get insight to it, you can check the specification of
this chip. Just browse it in the“Attachments”folder.

![](media/f7674a914ec2cbe10f1ec6446dc66c22.png)


**3. Specification：**

Input voltage of logic part: DC 5V

Input voltage of driving part : DC 5V

Working current of logic part: &lt;30mA

Operating current of driving part: &lt;2A

Maximum power dissipation: 10W (T=80℃)

Motor speed: 5V 200 rpm / min

Motor drive form: dual H-bridge drive

Control signal input level: high level 2.3V&lt;Vin&lt;5V, low level
-0.3V&lt;Vin&lt;1.5V

Working temperature: -25~130℃

**4. Drive the car to move**

From the above diagram, the direction pin of the left motor is GPIO33;
the speed pin is GPIO26; GPIO32 is the direction pin of the right motor;
and GPIO25 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-255. The
more the PWM value is set, the faster the rotation of the motor.

<table>
<tbody>
<tr class="odd">
<td>Function</td>
<td>GPIO33</td>
<td>GPIO26（PWM)</td>
<td>Left motor</td>
<td>GPIO32</td>
<td><p>GPIO25</p>
<p>（PW）</p></td>
<td>Right motor</td>
</tr>
<tr class="even">
<td>forward</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
</tr>
<tr class="odd">
<td>Go back</td>
<td>HIGH</td>
<td>50</td>
<td>anticlockwise</td>
<td>HIGH</td>
<td>50</td>
<td>anticlockwise</td>
</tr>
<tr class="even">
<td>Turn left</td>
<td>HIGH</td>
<td>200</td>
<td>anticlockwise</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
</tr>
<tr class="odd">
<td>Turn right</td>
<td>LOW</td>
<td>200</td>
<td>clockwise</td>
<td>HIGH</td>
<td>200</td>
<td>anticlockwise</td>
</tr>
<tr class="even">
<td>Stop</td>
<td>LOW</td>
<td>0</td>
<td>stop</td>
<td>LOW</td>
<td>0</td>
<td>stop</td>
</tr>
</tbody>
</table>

**5. Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 05 Motor drive and speed regulation</p>
<p>Motor moves forward, backward, left and right</p>
<p>*/</p>
<p>#define left_ctrl 33 //define the direction control pin(rgpio33) of the left motor</p>
<p>#define left_pwm 26 //define the speed control pin(D6) of the left motor</p>
<p>#define right_ctrl 32 //Define the direction control pin of the right motor as gpio32</p>
<p>#define right_pwm 25 //define PWM control pins of the right motor as gpio25</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below).

Place batteries in the car, and turn the power switch to ON end and
power up. Then the car moves forward for 2s, backward for 2s, turns left
for 2s and right for 2s, stops for 2s.

**6. Speed regulation**

HIGH is equivalent to a PWM value of 255, and 50 is a PWM value that can
be adjusted. The difference in this code is 200. The larger the upper
and lower difference is, the faster the motor rotates. We can adjust the
motor speed by adjusting the PWM value. If 50 is set to 0, the upper and
lower difference becomes 255, and the motor speed reaches the maximum;
if 50 is set to 255, the upper and lower difference becomes 0, the motor
speed is 0, and the motor does not rotate. When the upper and lower
difference values are positive, the motor reverses.

![](media/e078de7c7f7b71703318fd249a90b741.png)


LOW is equivalent to a PWM value of 0, and 255 is a PWM value that can
be adjusted. The difference in this code is 255. The larger the upper
and lower difference is, the faster the motor rotates. We can adjust the
motor speed by adjusting the PWM value. If 255 is set to 100, the upper
and lower difference becomes 100, and the motor speed slows down; if the
upper and lower difference is 255, the motor speed reaches the maximum;
if 255 is set to 0, the upper and lower difference becomes 0, and the
motor does not work. turned. When the upper and lower difference values
are negative, the motor rotates forward.

Project 6: Ultrasonic Sensor 
----------------------------

There is an ultrasonic sensor on the car. It is a very affordable
distance-measuring sensor.

The ultrasonic sensor sends a high-frequency ultrasonic signal that
human hearing can’t hear. When encountering obstacles, these signals
will be reflected back immediately. After receiving the returned
information, the distance between the sensor and the obstacle will be
calculated by judging the time difference between the transmitted signal
and the received signal. It is mainly used for object avoidance and
ranging in various robotics projects.

### Project 6.1: Ultrasonic Ranging 

**1.Description：**

In this experiment, we use an ultrasonic sensor to measure distance and
print the data on a serial monitor.

1.  **Knowledge：**

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an
object like what bats do. It offers excellent non-contact range
detection with high accuracy and stable readings in an easy-to-use
package. It comes complete with ultrasonic transmitter and receiver
modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of
electronics projects for creating obstacle detection and distance
measuring application as well as various other applications. Here we
have brought the simple method to measure the distance with Arduino and
ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![](media/e6f6037071e434febf7090b56ac35802.png)


**Use method and timing chart of ultrasonic module:**

1.  Setting the delay time of Trig pin of SR04 to 10μs at least, which
    can trigger it to detect distance.

2.  After triggering, the module will automatically send eight 40KHz
    ultrasonic pulses and detect whether there is a signal return. This
    step will be completed automatically by the module.

3.  If the signal returns, the Echo pin will output a high level, and
    the duration of the high level is the time from the transmission of
    the ultrasonic wave to the return.

![](media/db430baa07e2e4d9ac9efca1950b953a.jpeg)


![](media/4114885ac4b6214953e3224d8c1d52c4.png)


Time=Echo pulse width, unit: us

Distance（cm）=time/ 58

Distance(inch)=time/ 148

The HC-SR04 ultrasonic sensor has four pins: Vcc, Trig, Echo and GND.

The Vcc pin provides power generating ultrasonic pulses and is connected
to Vcc/+5V. The GND pin is grounded/GND.

The Trig pin is where the Arduino sends a signal to start the ultrasonic
pulse. The Echo pin is where the ultrasonic sensor sends information
about the duration of the ultrasonic pulse stroke to the Arduino control
board.

**Wiring Up**

|                   |              |
|-------------------|--------------|
| Ultrasonic Sensor | PCB Board    |
| Vcc               | 5V           |
| Trig              | S2（GPIO5）  |
| Echo              | S1（GPIO18） |
| Gnd               | G            |

1.  **Test Code：**

The pin Trig and Echo of the ultrasonic sensor are controlled by the
GPIO5 and GPIO18 of the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 06.1 Ultrasonic Ranging</p>
<p>Ultrasonic detection of distance from objects</p>
<p>*/</p>
<p>#define trigPin 5 // define trigPin gpio5.</p>
<p>#define echoPin 18 // define echoPin gpio18.</p>
<p>#define MAX_DISTANCE 700 // Maximum sensor distance is rated at 400-500cm.</p>
<p>//timeOut= 2*MAX_DISTANCE /100 /340 *1000000 = MAX_DISTANCE*58.8</p>
<p>float timeOut = MAX_DISTANCE * 60;</p>
<p>int soundVelocity = 340; // define sound speed=340m/s</p>
<p>void setup() </p>
<p>void loop() </p>
<p>float getSonar() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**3. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below).

Power up with a USB cable, open the monitor and set baud to 115200. When
you move an object in front of the ultrasonic sensor, it will detect the
distance and the serial monitor will show the distance value.

![](media/31878b27e6494d1dcbcb7beabff4d60f.png)


### Project 6.2: Light Following 

**1.Description：**

In the above experiments, we have learned about the 8\*8 dot matrix,
motor drivers and speed regulation, ultrasonic sensors, servos and other
hardware. In this experiment, we will combine them to create a follow
car with the ultrasonic sensor. The can can follow an object to move
through

measuring distance.

**2. Working Principle：**

|             |                              |                      |
|-------------|------------------------------|----------------------|
| Detection   | Detect the front distance    | Distance（unit：cm） |
| Condition 1 | Distance＜8                  |                      |
| State       | Go back（set PWM to 100）    |                      |
| Condition 2 | 8≤distance&lt;13             |                      |
| State       | stop                         |                      |
| Condition 3 | 13≤distance&lt;35            |                      |
| State       | Go forward（set PWM to 200） |                      |
| Condition 4 | distance≥35                  |                      |
| State       | stop                         |                      |

**3. Flow Chart：**

![](media/e1ded45b4454e64b7ff419bad285cb3a.png)


**4. Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 06.2: follow me</p>
<p>Car follows the object</p>
<p>*/</p>
<p>//motor</p>
<p>#define left_ctrl 33 //define direction control pins of the left motor as gpio33</p>
<p>#define left_pwm 26 //define PWM control pins of the left motor as gpio26.</p>
<p>#define right_ctrl 32 //define direction control pins of the right motor as gpio32.</p>
<p>#define right_pwm 25 //define PWM control pins of the right motor as gpio25</p>
<p>//ultrasonic sensor</p>
<p>#define TRIG_PIN 5 // set signals input of the ultrasonic sensor to gpio5.</p>
<p>#define ECHO_PIN 18 //set signals output of the ultrasonic sensor to gpio18.</p>
<p>long distance; //define distance variables</p>
<p>//servo</p>
<p>int channel_PWM = 3; // servo channels</p>
<p>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</p>
<p>int freq_PWM = 50;</p>
<p>// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.</p>
<p>int resolution_PWM = 10;</p>
<p>//</p>
<p>const int servopin = 4;//set the pin of the servo to gpio4.</p>
<p>void setup() </p>
<p>void loop() </p>
<p>else if((distance&gt;=8)&amp;&amp;(distance&lt;13))//if 8≤distance&lt;13</p>
<p></p>
<p>else if((distance&gt;=13)&amp;&amp;(distance&lt;35))//if 13≤distance&lt;35.</p>
<p></p>
<p>else//</p>
<p></p>
<p>}</p>
<p>float checkdistance() </p>
<p>void front()//define the state of going forward</p>
<p></p>
<p>void back()//define the state of going back</p>
<p></p>
<p>void Stop()//define state of stopping</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**5. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below).

Place batteries in the car and turn the power switch to ON end and power
up. Then the car will follow the obstacle to move.

### Project 6.3: Dodge obstacles 

1.  **Description：**

In this project, we will take advantage of the ultrasonic sensor to
detect the distance away from the obstacle so as to avoid them

**2. Working Principle：**

|          |                                                        |                                                         |                                                 |
|----------|--------------------------------------------------------|---------------------------------------------------------|-------------------------------------------------|
|          | 8\*8 Dot matrix display                                |                                                         |                                                 |
|          | Set servo to 90°                                       |                                                         |                                                 |
| **loop** | Detect the distance away from the obstacle（unit: cm） |                                                         |                                                 |
|          | Condition 1                                            | State                                                   |                                                 |
|          | **0&lt;distance＜10**                                  | Stop                                                    |                                                 |
|          |                                                        | Show the“stop”pattern                                   |                                                 |
|          |                                                        | Set the servo to 180°                                   | Distance away form the obstacle：a1（unit：cm） |
|          |                                                        | Set the servo to 0°                                     | Distance away form the obstacle：a2（unit：cm） |
|          |                                                        | Condition 2                                             | State                                           |
|          |                                                        | **a1＜a2**                                              | Car turns right（set PWM to 200）               |
|          |                                                        |                                                         | show“turning right”pattern                      |
|          |                                                        |                                                         | Set servo to 90°                                |
|          |                                                        | **a1≥a2**                                               | Turn left（set PWM to 200）                     |
|          |                                                        |                                                         | display“left turning”pattern                    |
|          |                                                        |                                                         | Set servo to 90°                                |
|          | **distance≥10**                                        | The 8\*8 dot matrix display shows“going forward”pattern |                                                 |
|          |                                                        | Go forward（set PWM to 200）                            |                                                 |

**3. Flow Chart：**

![](media/62cafb9417859896368e046396c58495.png)


**4. Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 06.3: avoid obstacles</p>
<p>*/</p>
<p>#include "HT16K33_Lib_For_ESP32.h" //define 8*8 dot matrix display</p>
<p>//8*8 dot matrix display</p>
<p>//define pins as GPIO21 and GPIO22</p>
<p>#define SDA 21</p>
<p>#define SCL 22</p>
<p>ESP32_HT16K33 matrix = ESP32_HT16K33();</p>
<p>//Array, used to store pattern data, which can be calculated by yourself or obtained from the touch tool</p>
<p>byte front[8]=;</p>
<p>byte back[8]=;</p>
<p>byte left[8]=;</p>
<p>byte right[8]=;</p>
<p>byte stop1[8]=;</p>
<p>byte result[8][8];</p>
<p>//motor</p>
<p>#define left_ctrl 33 //define direction control pins of the left motor as gpio33</p>
<p>#define left_pwm 26 //define PWM control pins of the left motor as gpio26.</p>
<p>#define right_ctrl 32 //define direction control pins of the right motor as gpio32.</p>
<p>#define right_pwm 25 //define PWM control pins of the right motor as gpio25</p>
<p>//ultrasonic sensor</p>
<p>#define TRIG_PIN 5 // Define the signal input of the ultrasonic sensor as gpio5.</p>
<p>#define ECHO_PIN 18 // Define the signal output of the ultrasonic sensor as gpio18.</p>
<p>long distance,a1,a2;//define three distance variables</p>
<p>//servo</p>
<p>int channel_PWM = 3; // servo channels</p>
<p>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</p>
<p>int freq_PWM = 50;</p>
<p>// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.</p>
<p>int resolution_PWM = 10;</p>
<p>//</p>
<p>const int servopin = 4;//set the IO pin of the servo to gpio4.</p>
<p>void setup() </p>
<p>void loop()</p>
<p></p>
<p>float checkdistance() </p>
<p>void avoid()</p>
<p></p>
<p>else//if left distance &lt;right distance</p>
<p></p>
<p>}</p>
<p>else//</p>
<p></p>
<p>}</p>
<p>void car_front()//define the state of going forward</p>
<p></p>
<p>void car_back()//define the state of going back</p>
<p></p>
<p>void car_left()//define the state of turning left</p>
<p></p>
<p>void car_right()//define the state of turning right</p>
<p></p>
<p>void car_Stop()//define the state of stopping</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**5. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Place batteries in the car and power up. Then the car can automatically
dodge obstacles

Project 7: Line Tracking Sensor 
-------------------------------

There are two IR line tracking sensors on the car. They are actually two
pairs of ST188L3 infrared tubes and used to detect black and white
lines. In this project, we will make a line tracking car

### **Project7.1: Reading Values** 

**1.Description：**

In this experiment, we use ST188L3 infrared tubes to detect black and
white lines, then print the data on the serial monitor.

**2. Knowledge：**

**Infrared line tracking:**

The IR line tracking sensor boasts a pair of ST188L3 infrared tubes.
ST188L3 tubes has an infrared emitting diode and a receiver tube. When
the emitting diode emits an infrared signal then received by the
receiving tube after being reflected by the white object. Once the
receiving tube receives the signal, the output terminal will output a
low level (0); when the infrared emitting diode emits an infrared
signal, and the infrared signal is absorbed by the black object, a high
level (1) will be output, thus realizing the function of detecting
signals through infrared rays.

Warning: Reflective optical sensors (including IR line tracking sensors)
shouldn’t be applied under sunlight as there is a lot of invisible light
such as infrared and ultraviolet.

Values detected by the line tracking sensor are shown in the table.

The value will be 1 if detecting black or no objects and the value 0
will appear if detecting white objects.

he detected black object or no object represents 1, and the detected
white object represents 0.

|      |       |                  |
|------|-------|------------------|
| Left | Right | Value（Binary ） |
| 0    | 0     | 00               |
| 0    | 1     | 01               |
| 1    | 0     | 10               |
| 1    | 1     | 11               |

**3. Test Code：**

The line tracking sensors of the PCB board are controlled by GPIO17 and
GPIO16 of the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 07.1: Tracking sensor read value</p>
<p>*/</p>
<p>#define tracking_left 17 //define the pin of the left sensor as gpio17</p>
<p>#define tracking_right 16 //define the pin of the right sensor as gpio16</p>
<p>int L_val,R_val; //define two variables of two sensors</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**4. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power on with a USB cable, open the serial monitor and set the baud rate
to 115200.

Put a black thing under the line tracking sensor of the car and move it,
you will see different indicators light up, and at the same time you
will see the value on the serial monitor.

The sensitivity can be adjusted by rotating the potentiometer. When the
indicator light is adjusted to the critical point of on and off state,
the sensitivity is the highest.

![](media/9f353a2dbbbc77b6b2d5c72ab8ed5a4f.png)


### Project 7.2: Line Tracking 

**1.Description：**

We’ve introduced the knowledge of motor drivers, speed regulation, and
infrared line tracking. In this experiment, the car will perform
different actions according to the values transmitted by the infrared
tracking.

1.  **Working Principle：**

|      |       |                  |              |
|------|-------|------------------|--------------|
| Left | Right | Value（Binary ） | State        |
| 0    | 0     | 00               | Stop         |
| 0    | 1     | 01               | Turn right   |
| 1    | 0     | 10               | Turn left    |
| 1    | 1     | 11               | Move forward |

1.  **Flow Chart：**

![](media/c6a0ace5faa949e4fb24fc511d179e08.png)


1.  **Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 07.2: Follow line to walk</p>
<p>*/</p>
<p>//motor</p>
<p>#define left_ctrl 33 //define direction control pins of the left motor as gpio33</p>
<p>#define left_pwm 26 //define PWM control pins of the left motor as gpio26</p>
<p>#define right_ctrl 32 //define direction control pins of the right motor as gpio32</p>
<p>#define right_pwm 25 //define the PWM control pin of the right motor as gpio25</p>
<p>//IR line tracking</p>
<p>#define tracking_left 17 //set the pin of the left line tracking sensor to gpio17</p>
<p>#define tracking_right 16 //set the pin of the right line tracking sensor to gpio16</p>
<p>int L_val,R_val;//Define two variables</p>
<p>//servo</p>
<p>int channel_PWM = 3; // servo channels</p>
<p>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</p>
<p>int freq_PWM = 50;</p>
<p>// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.</p>
<p>int resolution_PWM = 10;</p>
<p>//</p>
<p>const int servopin = 4;//set the IO port of the servo to gpio4.</p>
<p>void setup() </p>
<p>void loop()</p>
<p></p>
<p>void tracking()</p>
<p></p>
<p>else if((L_val == 1)&amp;&amp;(R_val == 0))//if only the left sensor detects black lines</p>
<p></p>
<p>else if((L_val == 0)&amp;&amp;(R_val == 1))//if only the right sensor detects black lines</p>
<p></p>
<p>else//if none of sensors detects black lines</p>
<p></p>
<p>}</p>
<p>void front()//define the state of going forward</p>
<p></p>
<p>void left()//define the state of turning left</p>
<p></p>
<p>void right()//define the state of turning right</p>
<p></p>
<p>void Stop()//define the state of stopping</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Place batteries in the car, turn the power switch to ON end and power
up.

Then the car will perform different functions via values sent by line
tracking sensors

Project 8: Light Following 
--------------------------

There are two photoresistors on the car. They can vary with the light
intensity and send information to the Nano board to control the car.

Photoresistors can determine and conduct the car to move by detecting
light

### Project 8.1 Read Values 

1.  **Description：**

In this experiment, we will learn the working principle of the
photoresistor

**2. Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance
varies from the light intensity. The signal terminal of the sensor is
connected to the analog port of the microcontroller. When the light is
stronger, the analog value at the analog port will increase; on the
contrary, when the light intensity is weaker, the analog value of the
microcontroller will reduce. In this way, the corresponding analog value
can reflect the ambient light intensity.

**3. Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are
connected to GPIO34 and GPIO35 of the ESP32 board.

For the following experiment, we use the photoresistor connected to
GPIO34 to finish experiments. First, let’s read analog values.

|                    |             |
|--------------------|-------------|
| Left photoresistor | PCB board   |
| G                  | G           |
| V                  | V           |
| S                  | S（GPIO34） |

**4. Test Code：**

The left photoresistor is controlled by the GPIO34 of the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 08.1:Read Photosensor Value</p>
<p>*/</p>
<p>#define PHOTOSENSITIVE_PIN 34 //Define the pins that ESP32 reads photosensitive</p>
<p>int photosensitiveADC; //Defines a variable to store ADC values</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

1.  **Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up with a USB cable, open the serial monitor and set baud rate to
115200.

When the light intensifies, the analog value will get increased; on the
contrary, the analog value will get reduced.

![](media/57d40f747b91ab12e31dc6678e2afeb4.png)


### Project 8.2: Light Following Car 

1.  **Description：**

We have learned the working principle of photoresistor, motor and speed
regulation. In this experiment, we will use a photoresistor to detect
the intensity of light as as to achieve the light following effect.

1.  **Working Principle：**

|                                 |                                  |               |
|---------------------------------|----------------------------------|---------------|
| Analog value of the left sensor | Analog value of the right sensor | Function      |
| &gt;3000                        | &gt;3000                         | Move forward  |
| &gt;3000                        | ≤3000                            | Move to left  |
| ≤3000                           | &gt;3000                         | Move to right |
| &lt;3000                        | &lt;3000                         | Stop          |

1.  **Wiring up：**

<table>
<tbody>
<tr class="odd">
<td>Left Photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
<td></td>
<td>Right photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
<td></td>
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>V</td>
<td>V</td>
<td></td>
<td>V</td>
<td>V</td>
</tr>
<tr class="even">
<td>S</td>
<td>S（GPIO34）</td>
<td></td>
<td>S</td>
<td>S（GPIO35）</td>
</tr>
</tbody>
</table>

1.  **Flow Chart：**

![](media/d30fcd3007f0d8e6c995bc456679172e.png)


1.  **Test Code：**

The left and right photoresistors are controlled by GPIO34 and GPIO35 of
the ESP32 board.

<table>
<tbody>
<tr class="odd">
<td><p><strong>//*************************************************************************************</strong></p>
<p><strong>/*</strong></p>
<p><strong>Project 08.2:Light Following Car</strong></p>
<p><strong>*/</strong></p>
<p><strong>//motor</strong></p>
<p><strong>#define left_ctrl 33 //define direction control pins of the left motor as gpio33</strong></p>
<p><strong>#define left_pwm 26 //define PWM control pins of the left motor as gpio26.</strong></p>
<p><strong>#define right_ctrl 32 //define direction control pins of the right motor as gpio32.</strong></p>
<p><strong>#define right_pwm 25 //define PWM control pins of the right motor as gpio25</strong></p>
<p><strong>//photoresistors</strong></p>
<p><strong>#define light_L_Pin 34 //define the pins of the left photoresistor as gpio34</strong></p>
<p><strong>#define light_R_Pin 35 //define the pins of the right photoresistor as gpio35</strong></p>
<p><strong>int left_light;</strong></p>
<p><strong>int right_light;</strong></p>
<p><strong>//servo</strong></p>
<p><strong>int channel_PWM = 3; // servo channels</strong></p>
<p><strong>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</strong></p>
<p><strong>int freq_PWM = 50;</strong></p>
<p><strong>// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.</strong></p>
<p><strong>int resolution_PWM = 10;</strong></p>
<p><strong>//</strong></p>
<p><strong>const int servopin = 4;//define the IO port of the servo as gpio4.</strong></p>
<p><strong>void setup()</strong></p>
<p><strong>void loop()</strong></p>
<p><strong>else if (left_light &gt; 3000 &amp;&amp; right_light &lt;= 3000) //detect ranges of left and right photoresistors</strong></p>
<p><strong></strong></p>
<p><strong>else if (left_light &lt;= 3000 &amp;&amp; right_light &gt; 3000) //detect ranges of left and right photoresistors</strong></p>
<p><strong></strong></p>
<p><strong>else //</strong></p>
<p><strong></strong></p>
<p><strong>}</strong></p>
<p><strong>void Car_front()</strong></p>
<p><strong></strong></p>
<p><strong>void Car_left()</strong></p>
<p><strong></strong></p>
<p><strong>void Car_right()</strong></p>
<p><strong></strong></p>
<p><strong>void Car_Stop()</strong></p>
<p><strong></strong></p>
<p><strong>//*************************************************************************************</strong></p></td>
</tr>
</tbody>
</table>

**6. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below).

Place batteries in the battery holder, turn the power switch to the ON
end and power up. Then the car will follow the light to move.

Project 9: IR Remote Control 
----------------------------

Infrared remote controls are everywhere in daily life. It is used to
control various home appliances, such as TV, speakers, video recorders
and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a
decoding MCU. In this project, we will make a IR remote control car.

### Project 9.1: IR Remote and Reception 

**1.Description：**

In this experiment, we will combine the IR receiver and the IR remote
control to read key values and show them on the serial monitor.

1.  **Knowledge：**

**IR Remote Control：**

It is a device with buttons. When the key is pressed, IR signals will be
sent.

Infrared remote control technology is widely used, such as TVs, air
conditioners and so on. And it can control air conditioners and TVs

The infrared remote control adopts NEC coding, and the signal period is
110ms.

The remote control is shown below:

![](media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)


Infrared (IR) receiver:

It can receive infrared light and be used to detect the infrared signal
emitted by the infrared remote control.

It can demodulate the received infrared light signal and convert it back
to binary, and then transmit the information to the microcontroller.

![](media/3da1969e509f53706643c77d0534eb73.png)


**NEC Infrared communication protocol：**

**NEC Protocol**

To my knowledge the protocol I describe here was developed by NEC (Now
Renesas). I've seen very similar protocol descriptions on the internet,
and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is
that it was used in my late VCR produced by Sanyo and was marketed under
the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the
days, when service manuals were filled with useful information!

**Features**

-   8 bit address and 8 bit command length.

-   Extended mode available, doubling the address size.

-   Address and command are transmitted twice for reliability.

-   Pulse distance modulation.

-   Carrier frequency of 38kHz.

-   Bit time of 1.125ms or 2.25ms.

**Modulation**

![](media/da33571c6f0afb94b1ec1d91caba3edb.png)


The NEC protocol uses pulse distance encoding of the bits. Each pulse is
a 560µs long 38kHz carrier burst (about 21 cycles). A logical "1" takes
2.25ms to transmit, while a logical "0" is only half of that, being
1.125ms. The recommended carrier duty-cycle is 1/4 or 1/3

**Protocol**

![](media/f970404e7bbfb5711fea5c776f689f3a.png)


The picture above shows a typical pulse train of the NEC protocol. With
this protocol the LSB is transmitted first. In this case Address $59 and
Command $16 is transmitted. A message is started by a 9ms AGC burst,
which was used to set the gain of the earlier IR receivers. This AGC
burst is then followed by a 4.5ms space, which is then followed by the
Address and Command. Address and Command are transmitted twice. The
second time all bits are inverted and can be used for verification of
the received message. The total transmission time is constant because
every bit is repeated with its inverted length. If you're not interested
in this reliability you can ignore the inverted values, or you can
expand the Address and Command to 16 bits each!

Keep in mind that one extra 560µs burst has to follow at the end of the
message in order to be able to determine the value of the last bit.

![](media/63364daf21e5522c64eb8dfa82f2cef2.png)


A command is transmitted only once, even when the key on the remote
control remains pressed. Every 110ms a repeat code is transmitted for as
long as the key remains down. This repeat code is simply a 9ms AGC pulse
followed by a 2.25ms space and a 560µs burst.

![](media/afea92a3b5cc1aa2457d2b118b157c84.png)


**Extended NEC protocol**

The NEC protocol is so widely used that soon all possible addresses were
used up. By sacrificing the address redundancy the address range was
extended from 256 possible values to approximately 65000 different
values. This way the address range was extended from 8 bits to 16 bits
without changing any other property of the protocol.

By extending the address range this way the total message time is no
longer constant. It now depends on the total number of 1's and 0's in
the message. If you want to keep the total message time constant you'll
have to make sure the number 1's in the address field is 8 (it
automatically means that the number of 0's is also 8). This will reduce
the maximum number of different addresses to just about 13000.

The command redundancy is still preserved. Therefore each address can
still handle 256 different commands.

![](media/2f78d1ce7f001926f6b90ad966796e91.png)


Keep in mind that 256 address values of the extended protocol are
invalid because they are in fact normal NEC protocol addresses. Whenever
the low byte is the exact inverse of the high byte it is not a valid
extended address.

1.  **Test Code：**

The IR receiver on the PCB board is controlled by GPIO19 of the ESP32
board.

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 9.1:Infrared remote and receiver</p>
<p>*/</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>#include &lt;IRremoteESP8266.h&gt;</p>
<p>#include &lt;IRrecv.h&gt;</p>
<p>#include &lt;IRutils.h&gt;</p>
<p>const uint16_t recvPin = 19; // Infrared receiving pin</p>
<p>IRrecv irrecv(recvPin); // Create a class object used to receive class</p>
<p>decode_results results; // Create a decoding results class object</p>
<p>void setup()</p>
<p></p>
<p>void loop() </p>
<p>delay(100);</p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

1.  **Test Result：**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Power up with a USB cable, open the serial monitor and set baud rate to
115200，

![](media/182f4b55797db30e68f4141642832f95.png)


Press a key on the IR remote control, you will view a code on the serial
monitor. If FFFFFFFF shows up, just ignore it.

![](media/16fa009afb94ccf19e179c3a4ec2369b.png)

**Code of each key**

![](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)


### Project 9.2: IR Remote Control Car 

**1.Description：**

In the above experiment, we have learned about the knowledge of the 8\*8
dot matrix display, the motor driver and speed regulation, the infrared
receiver and the infrared remote control. In this experiment, we will
use the infrared remote control and the infrared receiver to control the
car.

1.  **Working Principle：**

|                                                                                     |           |                            |
|-------------------------------------------------------------------------------------|-----------|----------------------------|
| Keys                                                                                | Keys Code | Functions                  |
| ![](media/e471ee4e3fd5a9daafc9d97460124119.png) | FF629D    | Go forward                 |
|                                                                                     |           | Display “forward”pattern   |
| ![](media/ace76021618d9ae6107a0f9b69dc47fc.png) | FFA857    | Go back                    |
|                                                                                     |           | Display “back”pattern      |
| ![](media/813f77055aefe6ee0fce22e14fbf093c.png) | FF22DD    | Turn left                  |
|                                                                                     |           | Show“left” pattern         |
| ![](media/9eb9042aace52c96a86379dbac70ee2d.png)              | FFC23D    | Turn right                 |
|                                                                                     |           | Show“right turning”pattern |
| ![](media/68cbb08d230ef50b2f69c66c685414f6.png) | FF02FD    | stop                       |
|                                                                                     |           | show“stop”pattern          |

1.  **Flow Chart：**

![](media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)


1.  **Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 09.2:Infrared remote control car</p>
<p>*/</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>#include &lt;IRremoteESP8266.h&gt;</p>
<p>#include &lt;IRrecv.h&gt;</p>
<p>#include &lt;IRutils.h&gt;</p>
<p>#include &lt;HT16K33_Lib_For_ESP32.h&gt;</p>
<p>//IR reception</p>
<p>const uint16_t RECV_PIN = 19; //IR reception pins</p>
<p>IRrecv irrecv(RECV_PIN); //initialize pins of IR receiver</p>
<p>unsigned long irr_val;</p>
<p>decode_results results; //</p>
<p>//dot matrix display</p>
<p>//define pins of the dot matrix display as GPIO21 and GPIO22</p>
<p>#define SDA 21</p>
<p>#define SCL 22</p>
<p>ESP32_HT16K33 matrix = ESP32_HT16K33();</p>
<p>//Array, used to store pattern data, which can be calculated by yourself or obtained from the touch tool</p>
<p>byte front[8]=;</p>
<p>byte back[8]=;</p>
<p>byte left[8]=;</p>
<p>byte right[8]=;</p>
<p>byte stop1[8]=;</p>
<p>//motor</p>
<p>#define left_ctrl 33 //define direction control pins of the left motor as gpio33</p>
<p>#define left_pwm 26 //define PWM control pins of the left motor as gpio26.</p>
<p>#define right_ctrl 32 //define direction control pins of the right motor as gpio32.</p>
<p>#define right_pwm 25 //define PWM control pins of the right motor as gpio25</p>
<p>//servo</p>
<p>int channel_PWM = 3; // servo channels</p>
<p>// Servo frequency, then the period is 1/50, which is 20ms, PWM has a total of 16 channels, 0-7 high-speed channels are driven by 80Mhz clock, and the last 8 low-speed channels are driven by 1Mhz clock.</p>
<p>int freq_PWM = 50;</p>
<p>// PWM resolution, in the range of 0-20, fill in 10. Then the pwm value of ledcWrite is in the range of 0-1024.</p>
<p>int resolution_PWM = 10;</p>
<p>//</p>
<p>const int servopin = 4;//define the IO pin of the servo as gpio4.</p>
<p>void setup() </p>
<p>void loop() </p>
<p>irrecv.resume(); // Receive the next value</p>
<p>}</p>
<p>delay(100);</p>
<p>}</p>
<p>void car_front()//define the state of going forward</p>
<p></p>
<p>void car_back()//define the state of going back</p>
<p></p>
<p>void car_left()//define the state of turning left</p>
<p></p>
<p>void car_right()//define the state of turning right</p>
<p></p>
<p>void car_Stop()//define the state of stopping</p>
<p></p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result：**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Place batteries in the car, turn the power switch to ON end and power
up.

turn the power switch to the ON end, power up and press a key of the IR
remote control. Then the car will make the corresponding movement.

Project 10: WIFI Working Mode 
-----------------------------

In this chapter, we will focus on the WiFi infrastructure of the ESP32.
ESP32 has 3 different WiFi working modes: Station mode, AP mode and
AP+Station mode. All WiFi programming projects must configure WiFi
operating mode before using WiFi, otherwise WiFi cannot be used.

### Project 10.1：WIFI Station Mode 

1.  **Components**

|                                                                         |                                                                                              |
|-------------------------------------------------------------------------|----------------------------------------------------------------------------------------------|
| ![](media/729232b0c2d2c01984808289b222890c.png) |
| USB Cable x1                                                            | ESP32\*1                                                                                     |

Plug the ESP32 to the USB port of your PC.

![](media/d434ef604378a0e3bcbc374203070228.png)

![](media/53f17b0de2d98d4714e8fe9043a346ca.jpeg)


**Component Knowledge：**

**Station mode：**

When setting Station mode, the ESP32 is taken as a WiFi client. It can
connect to the router network and communicate with other devices on the
router via a WiFi connection. As shown in the figure below, the PC and
the router have been connected. If the ESP32 wants to communicate with
the PC, the PC and the router need to be connected.

![](media/f74baff97695aa2ee33a8c19370d2547.png)


**2. Test Code：**

Since the WiFi name and password are different in different places,
before programming code, users need to enter the correct WiFi name and
password in the box shown in the figure below.

![](media/de4a41ba6c5b30f69df4127bd8bee6e2.png)

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 10.1: WiFi Station Mode</p>
<p>Description : Connect to your router using ESP32</p>
<p>*/</p>
<p>#include &lt;WiFi.h&gt;</p>
<p>const char *ssid_Router = "********"; //Enter the router name</p>
<p>const char *password_Router = "********"; //Enter the router password</p>
<p>void setup()</p>
<p>Serial.println("\nConnected, IP address: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>Serial.println("Setup End");</p>
<p>}</p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**3. Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Open the serial monitor and set baud rate to 115200, turn the power
switch to ON end and power up.

When the ESP32 successfully connects to ssid\_WiFi, the serial monitor
will print out the IP address that the WiFi assigned to the ESP32. Then
the serial monitor window will appear as follows:

![](media/e8b7ebd8b6271b315ea1fa7a233132b3.png)


### Project 10.2：WIFI AP Mode 

**1. Component Knowledge：**

**AP Mode:**

When setting AP mode, a hotspot network will be created, waiting for
other WiFi devices to connect. As shown below;

take the ESP32 as the hotspot. If a phone or PC needs to communicate
with the ESP32, it must be connected to the ESP32's hotspot.
Communication is only possible after a connection is established via the
ESP32.

![](media/35d90f1ce10814ea1897ba63f8bd7ad9.png)


1.  **Test Code:**

Before programming , you can make alter the AP name and password of the
ESP32 or remain them unchanged.

![](media/e1609f60163b3cff98334eb408c9fe6f.png)


<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 10.2: WiFi AP Mode</p>
<p>Description : Set ESP32 to open an access point</p>
<p>*/</p>
<p>#include &lt;WiFi.h&gt;</p>
<p>const char *ssid_AP = "ESP32_Wifi"; //Enter the AP name</p>
<p>const char *password_AP = "12345678"; //Enter the AP password</p>
<p>IPAddress local_IP(192,168,1,126);//Set the IP address of ESP32 itself</p>
<p>IPAddress gateway(192,168,1,10); //Set the gateway of ESP32 itself</p>
<p>IPAddress subnet(255,255,255,0); //Set the subnet mask for ESP32 itself</p>
<p>void setup()else</p>
<p>Serial.println("Setup End");</p>
<p>}</p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

1.  **Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Open the serial monitor and set baud rate to 115200 and power up. The
serial monitor will display as follows;

![](media/0a517c269127c71e488a8af0127c5069.png)


When observing the printed information of the serial monitor, turn on
the WiFi scanning function of the mobile phone, and you can see the
ssid\_AP which is called "ESP32\_Wifi" in the code. You can enter the
password "12345678" to connect it, or you can modify its AP name and
password by modifying the program code.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)

### Project 10.3：WIFI AP+Station Mode 

1.  **Component Knowledge：**

**AP+Station mode**

In addition to the AP mode and the Station mode, **AP+Station mode** can
be used at the same time. Turn on the Station mode of the ESP32, connect
it to the router network, and it can communicate with the Internet
through the router. Then turn on the AP mode to create a hotspot
network. Other WiFi devices can be connected to the router network or
the hotspot network to communicate with the ESP32.

**2. Test Code：**

Before running the code, you need to modify ssid\_Router,
password\_Router, ssid\_AP and password\_AP

![](media/a1233cf11e35bb8fc5283db02392eeec.png)


<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>Project 10.3: WiFi AP+Station Mode</p>
<p>Description : ESP32 connects to the user's router, turning on an access point</p>
<p>*/</p>
<p>#include &lt;WiFi.h&gt;</p>
<p>const char *ssid_Router = "********"; //Enter the router name</p>
<p>const char *password_Router = "********"; //Enter the router password</p>
<p>const char *ssid_AP = "ESP32_Wifi"; //Enter the AP name</p>
<p>const char *password_AP = "12345678"; //Enter the AP password</p>
<p>void setup()else</p>
<p>Serial.println("\nSetting Station configuration ... ");</p>
<p>WiFi.begin(ssid_Router, password_Router);</p>
<p>Serial.println(String("Connecting to ")+ ssid_Router);</p>
<p>while (WiFi.status() != WL_CONNECTED)</p>
<p>Serial.println("\nConnected, IP address: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>Serial.println("Setup End");</p>
<p>}</p>
<p>void loop() </p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

**Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Open the serial monitor and set baud rate to 115200. Then the monitor
will show as follows;

If the serial monitor does not display the following information, you
can press the reset button on the ESP32 board.

![](media/1fd21fafd84d2b529931a89d21a03d6a.png)

![](media/3e9b1cb7087e009967312eb9f89585bb.png)


Observe the information printed on the serial display, turn on your
cellphone and search WiFi, then you can see the ssid\_AP on the ESP32.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)

Project 11: Control Multi-purpose Car via Wifi 
----------------------------------------------

In the previous experiments, we have learned about the three modes of
ESP32: WIFI Station mode, WIFI AP mode and WIFI AP+Station mode. Then in
this chapter, we will use the WIFI Station mode of ESP32 to control a
multi-function car via app

### Project 11.1: Read Character String 

**1.Description：**

In this experiment, we first use the WIFI Station mode of ESP32 to read
the characters via app.

**Components**

|                                                                         |                                                                                              |                                                                                                                                                                            |
|-------------------------------------------------------------------------|----------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| ![](media/729232b0c2d2c01984808289b222890c.png) |
| USB cable x1                                                            | ESP32\*1                                                                                     | Cellphone/iPad\*1                                                                                                                                                          |

1.  **Install APP**

**Android system：**

![](media/24e74de43edc60c3864154f2a9283acb.png)


Transfer the file Beetlebot.apk to your cellphone or IPAD, click it to
install, and click“**ALLOW**”→“**INSTALL**”→“**OPEN**”.

![](media/655b30a1d179bd4a3055309ce07a3701.png)

![](media/ae159de2dfb79a1ce2bc06b256168bdb.png)


![](media/85c6702f6ed02ca8961778355d97044f.png)


![](media/bec3fc042dfcb68e8100dc4fc0edf8d1.png)


![](media/52cccc53b43b9abeaeb091f0d87261cf.jpeg)


**IOS system**

Open App Store

![](media/27924fdb3d67692df7c63d8d0fb72287.png)

Search Beetlebot，click“![](media/962a57f92b78eea1f0e3e81463497a9c.png)
”to download Beetlebot.

The installation instructions are similar with Android system.

1.  **Test Code：**

<table>
<tbody>
<tr class="odd">
<td><p>// generated by KidsBlock</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>#include &lt;WiFi.h&gt;</p>
<p>#include &lt;ESPmDNS.h&gt;</p>
<p>#include &lt;WiFiClient.h&gt;</p>
<p>String item = "0";</p>
<p>const char* ssid = "ChinaNet-2.4G-0DF0";</p>
<p>const char* password = "ChinaNet@233";</p>
<p>WiFiServer server(80);</p>
<p>void setup() </p>
<p>Serial.println("");</p>
<p>Serial.print("Connected to ");</p>
<p>Serial.println(ssid);</p>
<p>Serial.print("IP address: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>server.begin();</p>
<p>Serial.println("TCP server started");</p>
<p>MDNS.addService("http", "tcp", 80);</p>
<p>}</p>
<p>void loop() </p>
<p>while(client.connected() &amp;&amp; !client.available())</p>
<p>String req = client.readStringUntil('\r');</p>
<p>int addr_start = req.indexOf(' ');</p>
<p>int addr_end = req.indexOf(' ', addr_start + 1);</p>
<p>if (addr_start == -1 || addr_end == -1) </p>
<p>req = req.substring(addr_start + 1, addr_end);</p>
<p>item=req;</p>
<p>Serial.println(item);</p>
<p>String s;</p>
<p>if (req == "/")</p>
<p></p>
<p>//client.print(s);</p>
<p>client.stop();</p>
<p>}</p></td>
</tr>
</tbody>
</table>

Note：

![](media/85551285d37d87fc8decadc09f968ec3.png)

Change the Wifi name and password into yours

1.  **Test Result**

Upload the code to the ESP32 board(if the code can’t be uploaded, you
can click![](media/d09c4a31563f04a42d451e7bc1a5fb8a.png)
and press
Boot![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)
, as shown below)

Place batteries in the car, turn the power switch to ON end and power
up.

Open the serial monitor and set baud rate to 115200; then the monitor
will print detected WiFi IP address, open app to enter the detected Wifi
IP address in the text box, as shown below;

For example, the following IP address is 192.168.1.137. Then click
button ![](media/80bffb9379c61001e95c5ca67aefa5fb.png)
 to connect wifi.

If the IP address 192.168.1.137 is shown in the test box, which means
wifi is connected with app.

![](media/3adbbce53f9e8e68090c8ebde9c01bd7.png)


Click each key on app, then the monitor will receive corresponding
characters

If the monitor doesn’t display anything, press reset button to reboot

![](media/1fd21fafd84d2b529931a89d21a03d6a.png)

![](media/c4029ae9b766e39ae146f43c182c9dcb.png)


### Project 11.2: Control 8\*8 Dot Matrix Display Via WIFI  

**1.Description：**

In this experiment, we will use the WIFI Station mode to control the
8\*8 dot matrix display on the car through APP and WIFI.

**2. Test Code**

<table>
<tbody>
<tr class="odd">
<td><p>// generated by KidsBlock</p>
<p>#include &lt;Arduino.h&gt;</p>
<p>#include &lt;WiFi.h&gt;</p>
<p>#include &lt;ESPmDNS.h&gt;</p>
<p>#include &lt;WiFiClient.h&gt;</p>
<p>#include &lt;HT16K33_Lib_For_ESP32.h&gt;</p>
<p>String item = "0";</p>
<p>const char* ssid = "ChinaNet-2.4G-0DF0";</p>
<p>const char* password = "ChinaNet@233";</p>
<p>WiFiServer server(80);</p>
<p>//dot matrix</p>
<p>//set pins of the dot matrix display to GPIO21 and GPIO22</p>
<p>#define SDA 21</p>
<p>#define SCL 22</p>
<p>ESP32_HT16K33 matrix = ESP32_HT16K33();</p>
<p>//Array, used to store the data of the pattern, can be calculated yourself</p>
<p>byte front[8]=;</p>
<p>byte back[8]=;</p>
<p>byte left[8]=;</p>
<p>byte right[8]=;</p>
<p>byte stop1[8]=;</p>
<p>void setup() </p>
<p>Serial.println("");</p>
<p>Serial.print("Connected to ");</p>
<p>Serial.println(ssid);</p>
<p>Serial.print("IP address: ");</p>
<p>Serial.println(WiFi.localIP());</p>
<p>server.begin();</p>
<p>Serial.println("TCP server started");</p>
<p>MDNS.addService("http", "tcp", 80);</p>
<p>matrix.init(0x70, SDA, SCL);// matrix init</p>
<p>matrix.clear(); //clear</p>
<p>matrix.setBrightness(10);</p>
<p>}</p>
<p>void loop() </p>
<p>while(client.connected() &amp;&amp; !client.available())</p>
<p>String req = client.readStringUntil('\r');</p>
<p>int addr_start = req.indexOf(' ');</p>
<p>int addr_end = req.indexOf(' ', addr_start + 1);</p>
<p>if (addr_start == -1 || addr_end == -1) </p>
<p>req = req.substring(addr_start + 1, addr_end);</p>
<p>item=req;</p>
<p>Serial.println(item);</p>
<p>String s;</p>
<p>if (req == "/")</p>
<p></p>
<p>else if(req == "/btn/i")</p>
<p></p>
<p>else if(req == "/btn/j")</p>
<p></p>
<p>else if(req == "/btn/k")</p>
<p></p>
<p>//client.print(s);</p>
<p>client.stop();</p>
<p>}</p></td>
</tr>
</tbody>
</table>

**Test Result：**

Click ![](media/db52b661d5b22528618e9c14aefa367e.png)
, the 8\*8 display will show the forward pattern,
click ![](media/6abdf809090a56fb251e9ee4d44c70f4.png)
, the stop pattern will be shown and click
![](media/aca24e8c4a86a9a2702160be4a4d9970.png)
, the display module will show the
backward pattern

### Project 11.3: Multi-purpose Car 

In this project we will demonstrate how to control the car with app

![](media/3b01d719998844893e38d61ee16add19.png)


![](media/2b44432dad7585375c1d73c6830d8a79.png)

### **9. Resources**

Download code, libraries and more details, please refer to the following
link:

[https://fs.keyestudio.com/KS50](https://fs.keyestudio.com/KS0470)02

 

























