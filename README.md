# AI-Powered-Portable-ECG-Device
This is Ai enabled ecg device which is portable and can be integrated with smartphone app to evaluate ECG of a patient.
## Features

- **Portable and easy-to-use ECG device**
- **Real-time ECG signal acquisition and analysis**
- **Microcontroller-based hardware for signal processing**
- **Software integration for detailed ECG analysis and results**
- **User-friendly interface for monitoring and reviewing results**

## Hardware Requirements

- Microcontroller ATmega328P
- ECG sensor module
- Battery pack
- Connecting wires
- Enclosure for the device

## Software Requirements

- ECG application (app-release.apk)

## Installation

### Hardware Setup

1. **Assemble the Hardware**: Connect the ECG sensor module to the microcontroller according to the sensor and microcontroller documentation.
2. **Power the Device**: Ensure the device is powered using a battery pack or USB connection.

### Software Setup

1. **Download The Application**

## Introduction
The convergence of the Internet of Things (IoT) and biomedical tools has emerged as a
transformative force in addressing healthcare challenges. One notable application is the remote
monitoring of patients, catering to diverse demographics, including the elderly and individuals
residing in remote areas. A pivotal factor in this evolution is the breakthroughs in Very Large Scale
Integration (VLSI) technology, which have led to the development of smaller, portable, low-cost
sensors. These sensors power wearable solutions capable of providing 24/7 patient monitoring,
ensuring instant responses during critical situations. The necessity of such portable, low-cost
sensors lies in their ability to make advanced healthcare accessible to a broader population,
particularly those with limited financial resources or those living far from healthcare facilities.
The seamless integration of constant internet connectivity further amplifies the benefits by enabling
real-time monitoring. This not only ensures prompt emergency responses but also facilitates the
remote monitoring of patients, thereby enhancing healthcare accessibility. This capability has
proven particularly valuable during events like the COVID-19 pandemic, where swift and remote
health assessments became imperative. Moreover, the IoT-based health monitoring paradigm
introduces a convenient alternative for health check-ups, significantly reducing the necessity for
physical doctor visits. This not only contributes to the efficiency of healthcare delivery but also
instills a sense of security among the elderly, enabling them to undergo frequent health assessments
and fostering overall well-being.
In essence, the synergy between IoT, biomedical tools, technological breakthroughs, and portable,
low-cost sensors is reshaping healthcare, making it more accessible, responsive, and tailored to the
needs of diverse patient populations.

### Motivation
The integration of remote health monitoring technologies addresses several critical scenarios in
healthcare. First and foremost, it proves invaluable in monitoring the health condition of elderly
individuals who are away from home. This capability provides a sense of reassurance for both the
elderly individuals and their families, ensuring that their well-being is continually observed even
when they are not in close proximity. Additionally, for patients situated in remote locations where
medical facilities and doctors are not readily available, remote health monitoring becomes a lifeline.
It bridges the geographical gap, allowing healthcare professionals to monitor patients and provide
timely interventions, thereby overcoming the challenges associated with limited access to medical
care.
Furthermore, in emergency situations such as accidents, where immediate on-site treatment may not
be feasible, remote health monitoring plays a pivotal role. This technology enables doctors to
monitor patients remotely, gaining crucial insights into their health status and facilitating swift
decision-making for appropriate medical interventions. This proves particularly crucial for
individuals admitted to an Intensive Care Unit (ICU) with a serious medical condition. During
emergencies, the remote monitoring process significantly eases the task of healthcare professionals
by providing continuous and real-time updates on the patient's vital signs and overall health
condition.
In addition to the general benefits of remote health monitoring, the development and deployment of
low-cost portable devices for tracking health abnormalities offer significant motivation. These
devices democratize access to advanced healthcare monitoring by making it affordable for a wider
population, including those with limited financial resources. The portability aspect ensures that
patients can continuously monitor their health regardless of their location, whether at home,
traveling, or in remote areas. This constant vigilance is crucial for early detection of health
abnormalities, enabling prompt medical attention and intervention, which can be life-saving.
In summary, the use of remote health monitoring technologies, combined with the development of
low-cost portable devices, represents a disruptive solution for improving healthcare accessibility
and emergency response mechanisms. This convergence ultimately leads to more effective and
efficient patient care, fostering a proactive approach to health management and ensuring that
individuals receive the care they need, whenever and wherever they need it.

## Methodology
An electrocardiogram (ECG) is a crucial medical diagnostic tool that plays a fundamental role in
assessing the rhythm and electrical activity of the heart. By employing sensors placed on the skin's
surface, an ECG captures and records the intricate electrical signals generated by the heart during
each heartbeat. This non-invasive procedure is instrumental in detecting and analyzing changes in
the electrical patterns, offering valuable insights into a range of cardiac conditions. ECGs are
particularly adept at identifying rhythm irregularities, insufficiencies in blood flow to the heart, and
imbalances in electrolyte levels. The comprehensive information obtained through an ECG
contributes significantly to the accurate diagnosis and subsequent management of various
cardiovascular issues, making it an indispensable tool in the field of cardiology.
The PQRST curve, often referred to as the ECG waveform or ECG complex, is a visual
representation of the electrical activity of the heart over time. It consists of several distinct waves
and intervals, each of which corresponds to a specific phase of the cardiac cycle. The primary
components of the ECG waveform are labeled as P, Q, R, S, and T waves.

![ECG Waveform](Images/ECG waveform.png)

**P-Wave**: The P wave is the first positive deflection on the ECG waveform. It represents the
depolarization (contraction) of the atria, the upper chambers of the heart. The P wave indicates the
initiation of the electrical impulse at the sinoatrial (SA) node and the spread of the impulse through
the atria.
**QRS Complex**: The QRS complex is a combination of three waves: Q, R, and S. It follows the P
wave and represents the depolarization of the ventricles, the lower chambers of the heart.
**Q-Wave**: The initial downward deflection after the P wave.
**R-Wave**: The first positive deflection occurred after the Q wave.
**S-Wave**: The negative deflection that follows the R wave.
**T-Wave**: The T wave is the positive deflection that follows the QRS complex. It represents the
repolarization (relaxation) of the ventricles. During the T wave, the ventricles prepare for the next
cardiac cycle.
The PQRST complex provides crucial information about the heart's electrical activity and can be
used to identify various cardiac conditions. The duration and amplitude of each wave and interval
are carefully analyzed by healthcare professionals to assess the heart's rhythm and detect
abnormalities.

**Additional Intervals:**
**PR Interval**: This interval measures the time from the beginning of the P wave to the beginning of
the QRS complex. It represents the time taken for the electrical impulse to travel from the atria to
the ventricles.
**QT Interval**: This interval extends from the beginning of the QRS complex to the end of the T
wave. It represents the total time for ventricular depolarization and repolarization.
Understanding the PQRST curve is fundamental to interpreting an electrocardiogram (ECG) and is
a key tool in diagnosing various cardiac conditions, including arrhythmias, conduction
abnormalities, and ischemia.
### Normal heart rhythm vs abnormal heart rhythm
The heart's rhythm is a carefully orchestrated sequence of electrical impulses that ensures effective
and efficient pumping of blood throughout the body. A normal heart rhythm, also known as sinus
rhythm, is characterized by a regular and coordinated pattern of electrical signals originating from
the sinoatrial (SA) node, the heart's natural pacemaker. This rhythmic pattern facilitates the
synchronized contraction of the atria and ventricles, maintaining optimal blood circulation.
Conversely, various abnormalities in heart rhythm, or arrhythmias, can disrupt this harmonious
process. Arrhythmias can be broadly categorized into two main types: tachyarrhythmias and
bradyarrhythmias. Tachyarrhythmias involve abnormally fast heart rates, while bradyarrhythmias
involve unusually slow heart rates.

**Common types of arrhythmias include:**
**Atrial Fibrillation (AF):** This is a common tachyarrhythmia where the atria quiver instead of
contracting effectively, leading to an irregular and often rapid heartbeat.
**Atrial Flutter:** Similar to AF, but with a more organized and regular pattern of abnormal atrial
contractions.
**Supraventricular Tachycardia (SVT):** A rapid heart rate originating above the heart's ventricles,
often causing palpitations.
**Ventricular Tachycardia (VT):** A fast, regular beating of the heart's lower chambers (ventricles),
which can be life-threatening.
**Ventricular Fibrillation (VF):** A chaotic, rapid heartbeat originating in the ventricles is a medical
emergency requiring immediate intervention.
**Bradycardia:** A slower-than-normal heart rate, often due to issues with the heart's electrical
conduction system.
**Heart Block:** A condition where the electrical signals between the atria and ventricles are delayed
or blocked.
#### IMAGE

***3 lead configuration***
The 3-lead ECG configuration is a simplified yet effective method for monitoring the heart's
electrical activity. This setup uses three electrodes placed on the patient's body to capture the
electrical signals generated by the heart. Typically, the electrodes are positioned as follows: one on
the right arm (RA), one on the left arm (LA), and one on the left leg (LL). This arrangement forms
the basis of Einthoven's triangle, which allows for the measurement of electrical activity from
different perspectives.
In the 3-lead configuration, the leads are named Lead I, Lead II, and Lead III:
● Lead I measures the voltage difference between the right arm and left arm.
● Lead II measures the voltage difference between the right arm and left leg.
● Lead III measures the voltage difference between the left arm and left leg.
By capturing signals from multiple perspectives, the 3-lead configuration enhances the accuracy
and reliability of ECG readings, making it a valuable tool in both clinical and remote monitoring
settings.

**Advantages of 3-Lead Configuration Over Single-Lead Configuration:**
● Captures a more comprehensive view of the heart's electrical activity from multiple angles,
improving diagnostic precision.
● Better at detecting cardiac abnormalities such as arrhythmias and ischemia that might be missed
with a single lead.
● Provides redundancy, if one lead fails, the other leads can still offer crucial information, ensuring
continuous monitoring.
● Reduces interference and noise, resulting in higher quality ECG recordings.

### System Architecture
The system architecture of our ECG monitoring solution encompasses a seamless integration of
hardware and software components to ensure efficient signal acquisition, processing, and analysis.
At the core of our architecture lies the ECG sensor, responsible for detecting electrical signals
generated by the heart. The raw analog signal from the sensor is then digitized by a microcontroller
unit (MCU), facilitating real-time data processing and transmission.
From the MCU, the digitized ECG data is transmitted to a smartphone using a USB-C type cable,
establishing a reliable communication link between the monitoring device and the user's mobile
device. Leveraging the USB-C interface ensures high-speed data transfer and compatibility with
modern smartphone platforms.
Upon receiving the ECG data, the smartphone app takes charge of signal processing and analysis.
The raw data undergoes digital filtering using a Butterworth filter, designed to suppress noise and
artifacts while preserving the essential features of the ECG waveform. This filtering step enhances
the quality and clarity of the ECG signal, preparing it for subsequent analysis.
Subsequently, the Pan-Tompkins algorithm, a robust QRS detection algorithm, is applied to the
filtered ECG signal. This algorithm accurately identifies the QRS complexes, representing the
electrical activity associated with ventricular depolarization, and extracts relevant time intervals
crucial for cardiac assessment.
 #### IMAGE

