# Star Tracker C Math Libraries

This repository has some early versions of the math functions for trig properties of a set of triangles, as well as a quaternion calculator for avoiding gimbal lock on an object moving in Euclidean space. It contains a Quaternion object with (w, x, y, z). The project includes a star catalog in a csv file, as well as a sql to create the table that holds the csv data.

The implementations of in this repository are based on the following theses:

Performance Analysis of a Fixed Point Star Tracker Algorithm for Use Onboard a Picosatellite , Kenneth Daniel Diaz (2006)

Designing Star Trackers to Meet Micro-satellite Requirements, KARA M. HUFFMAN (2006)

## Algorithm

The algorithm aims to capture combinations of 3 stars in two-dimensional space, determine its properties, and compare these to our star catalog. The properties of each triangle is extracted through 3 different strategies.

* Area and Polar Moment
* Planar Angle
* Vector Angle

Our database needs to be prepared beforehand, this requires calculating all properties of our dataset. The main function demonstrates the mathematical function for using all three strategies.

The stars that we choose to calculate are exclusive to their magnitude. The native appraoch to this problem would be to assume that any object in the sky is a star. This is not the case as you can have space dust touching the lens. For this we pick stars with a magnitude of at least 3.0. The magnitude of a star is its brightness, the lower the magnitude is the brighter the star is. For instance -5.0 would be brighter than 3.0. The brighter the star, the better chance of a match that we'll find in our dataset.

The database engine planned for this is mysqlite.