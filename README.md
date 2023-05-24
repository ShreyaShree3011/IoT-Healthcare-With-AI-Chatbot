# IoT-Healthcare-With-AI-Chatbot

## Abstract -
Healthcare system with improved efficiency, safety, and reduced cost can be achieved by implementing smart IoT healthcare system which is user friendly and easy to use. The system provides multiple features such as temperature measurement, pulse measurement, BMI calculation, medicine reminder and social distancing alert using different sensors. The system alerts patients through LCD messages. The temperature and pulse measurement help in monitoring health and diagnosing diseases. BMI calculation classifies a person’s health status as underweight, normal, overweight, or obese categories, providing health status insights. Alert systems notifies the users the important safety measures like maintain social distancing or taking medicines on time. An ultrasonic sensor detects proximity to other humans and alerts users if they violate safe distance. A buzzer triggers audio reminders for medicines, preventing users from missing doses. The system collects real-time data management using Thing-Speak database which enables efficient, affordable, and patient-friendly healthcare experience. By combining sensors, alerts, reminders, and data management into an easy-to-use system which enhances the safety, reduce costs, and improves overall healthcare outcomes while offering a seamless user experience. Regular use of this system can help prevent disease progression, manage chronic illnesses, and promote wellness especially for elderly, sick or physically disabled individuals who are unable to visit the hospitals frequently.

## Objective -
The main aim of this project is to enable the individuals to independently monitor their health and simplify managing well-being in daily life. 
The key goals of this project are:
1.	Reduce healthcare costs by minimizing hospital visits and check-ups.
2.	Decrease patient travel expenses for consultation and tests.
3.	Allow patients and their family members to feel tension-free and enjoy life by continuously monitoring health from home.
The project has five important features which includes the following:
1.	An automated chatbot for conversing with users and providing health-related information and precautions
2.	Heart rate monitoring to detect abnormal heartbeats and potential heart attacks. 
3.	Social distancing alerts to remind maintain safe spacing during and post-pandemics. Buzzers are used to detect exceeding limits.
4.	Medication reminders scheduled at does to avoid forgetting important medicines in busy routines.
5.	Chatbot is used to monitor the capabilities which enhance over time based on accumulated health data.
Based on the above-mentioned features, the project is linked to an IoT platform and web services enabling the addition of more health sensors and devices. Nearly real-time data collection and dissemination allows monitoring from anywhere. The basic sensor is used in this project that includes a NodeMCU with built-in Wi-Fi connecting to a mobile hotspot and internet which upload the health data to the cloud and an open-source Thing-Speak API collects data and provides output for both humans and machines, enabling greater scalability and automation.

## Proposed System -
The main idea behind this project is to allow an individual to monitor their health remotely and ease the process of maintaining the health of the patients in day-to-day life. The main motive is to reduce the healthcare cost and reduce the travelling expenses of the patients. The chatbot plays as a virtual assistant for automating the conversation with the user. Our project involves pulse measurement, BMI measurement, temperature measurement, social distance alert and medicine remainder. 

The pulse monitoring is mainly used to measure the heartbeat and alerts the risk of heart strokes. Health monitoring is very important to be done regularly to make sure our health is in a good condition. This is a continuous and a non-stop monitoring. As pulse monitoring is very sensitive as well as requires continuous monitoring, we have added in our project. Temperature measuring is an important part that should be measured continuously. If the fever is not measured at a right time, then it can lead to various problems and health issues. This temperature monitoring will go on continuously and alert if the temperature increases. This continuous measurement helps us to get an idea about our body temperature and maintain our body from getting heatstroke's which happens on a great level worldwide. 

The next specialty in our project is that the social distance alert. This has become a very necessary part after the awake of pandemic. Many times, we forget to maintain social distance with people in the public. This cam brings a lot of life-threatening issues. So, we have this feature in our healthcare kit so that it can alert user when the person exceeds the distance maintaining limit. Once the limit is crossed, we will get a buzzer sound as an alert.

The most important feature that is most required and we have involved is the medicine remainder. Now-a-days in our busy schedule we forget to take medicine which can lead us to major issues. So, this medicine remainder plays as an important and a unique feature in our project. This will give a buzzer sound as a remainder based on, we set the time. This helps to prevent us forgetting to take the medicine.

 Chatbot allows the patient to receive various precautions in a casual way and sort out small issues easily. It helps in improving the scalability of support and helps in journey of the patients to be kept in a smoother way. It also helps the patients to get the precautions just by entering the symptoms or the disease. So, by using this patient can take the basic precaution before reaching out to the doctor which will prevent from the disease getting more worsted. 

We have used Thing speak API and a web service for “Internet of Things.” The thing Speak API is an open-source interface which collects the incoming data and output is given for both human users and machines. In the hardware components there will be NodeMCU which has an inbuilt Wi-Fi module, that Wi-Fi module connects with the mobile hotspot with 2.4ghz. After the mobile gets connected successfully the object will connect to the cloud through the internet connection to upload and receive data. We have used Thing speak mainly to connect objects to IOT. The interface provides simple communication capabilities to object with the IoT environment, Moreover, things peak allows to build application with the help of data collected by the sensors. It offers near real time data collection, data processing, and simple visualizations for its users. The collected data is stored in the channels which consist of various features which can be used by the user.

Each channel allows to store up to 8 fields of data, using up to 255 alphanumeric characters each. There are 4 dedicated fields for positional data, consisting of description, latitude, longitude, and elevation. Data is sent and received via simple” Hypertext Transfer Protocol” much like going to web page and filling out a form. The data is then uploaded to the cloud and form then can be used for a variety of purpose. In turn, data can be gathered and communicated with the cloud, which in turn sends these messages to the object. For this report we take the example of connecting heartbeat sensor, when we take the heartbeat sensor and insert to our finger the beat is rising and it shows the value by per minute. We can clearly see the changing of heartbeat data in thing Speak. 

These features are the specialty of our project which can be found separately but cannot to found together. By using this healthcare device, the patient as well as their family member can be tension free and enjoy their life

## Hardware and Software Components Used -

## A. HARDWARE COMPONENTS -
a. Arduino UNO
b. LM35
c. Heartbeat sensor – green easy pulse sensor
d. Ultrasonic sensor
e. Load cell sensor
 f. LCD
g. NodeMCU
h. Buzzer
i. Jumper wire

## B. SOFTWARE COMPONENTS -
a. Embedded C
b. Arduino IDE
c. Thing Speak
d. Artificial Intelligence
