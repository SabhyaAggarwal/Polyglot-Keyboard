---
title: "Polyglot-Keyboard"
author: "Sabhya Aggarwal"
description: "A keyboard that can function as both a stenography keyboard and a QWERTY keyboard"
created_at: "2026-06-24"
---

# June 24: Made the schematic and PCB

So I explored the guide and decided how I wanted my PCB to be: a mixture of a tray mount and a plateless mount keyboard that supports stenography, which I want to try out, and also supports the QWERTY 

Schematic:

![Schematic](images/Screenshot%202026-06-24%20at%206.22.29%20PM.png)

and I made the PCB:

![PCB](images/Screenshot%202026-06-24%20at%206.23.11%20PM.png)

Here is the beautiful 3d render of PCB:

![3D render](images/image.png)

**Total time spent: 7 hrs**

# June 24: Manually routed the board cleanly

So I found out that auto routing is not allowed so I manually routed everything and I made it cleanly. I had to modify the pinout, which GPIO pins are connected to which, because as I exchanged that I made the routing even cleaner. In the middle I remembered that I can use 2 layers. As I remembered that, I made my routing very beautiful and very good. Now my PCB looks great. I love it 

![Schematic](images/Screenshot%202026-06-24%20at%2010.08.11%E2%80%AFPM.png)

![PCB](images/Screenshot%202026-06-24%20at%2010.07.58%E2%80%AFPM.png)

![3D render](images/image%20(12).png)

**Total time spent: 3.6 hrs**

# June 25 : Fixed up the routing and all(again) and made Case and Firmware

Today was a really productive day. I decided that I am not going to use other things for the main dev board but rather I'll just directly solder it on through the castellated edges...

Old Footprint:

![](images/Old-Footprint.png)

New footprint:

![](images/Update-Footprint.png)

and I had to re-route as pads became larger:

![](images/Re-Re-Routing.png)

and I made the case in onshape(the holes at bottom are purposeful, they will help me verify if soldering is still fine if something breaks...):

![](images/case-pic.png)

And the 3d view of my finished keyboard!:

![](images/Keyboard%20pic%201.png)

![](images/keyboard%20pic%202.png)

and I also made the firmware with QMK

**Total time spent: 8 hrs**
