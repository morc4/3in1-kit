.. _ar_reversing_aid:

6.4 Reversing Aid
===================

With the development of science and technology, a lot of high-tech
products have been installed in cars, among which the reversing assist
system is one of them. Here we use ultrasonic sensors, LCD, LED and
buzzer to make a simple ultrasonic reversing assist system.



**Schematic Diagram**

.. image:: img/image265.png
    :width: 800
    :align: center

**Fritzing Circuit**

.. image:: img/backcar.png
    :width: 800
    :align: center

* :ref:`cpn_uno`
* :ref:`cpn_breadboard`
* :ref:`cpn_wires`
* :ref:`cpn_buzzer`
* :ref:`cpn_i2c_lcd1602`
* :ref:`cpn_ultrasonic`



**Code**


.. note::

    * You can open the file ``6.4_reversingAid.ino`` under the path of ``3in1-kit\learning_project\6.4_reversingAid`` directly.
    * Or copy this code into Arduino IDE 1/2.
    * Then :ref:`ar_upload_code` to the board.
    * Please make sure you have added the ``LiquidCrystal_I2C`` library, detailed tutorials refer to :ref:`add_libraries_ar`.


.. raw:: html

    <iframe src=https://create.arduino.cc/editor/sunfounder01/d6848669-fe79-42e9-afd7-0f083f96a6d6/preview?embed style="height:510px;width:100%;margin:10px 0" frameborder=0></iframe>

**How it works?**

In this project, we need to avoid the interference between the LCD
screen and the alarm system as much as possible (for example, the LED
flicker time is too long and the LCD refresh is delayed), so please
avoid using the ``delay()`` statement and use two separate intervals to
control the working frequency of the LCD and alarm system respectively.
Its workflow is shown in the flow chart. For analysis of Interval
function, refer to :ref:`ar_interval`.

.. image:: img/Part_three_1_Example_Explanation.png
   :align: center



