# Chronometer
A chronometer in c++ to take times easily

## Members:

### chronometer() 
creates and initialize de chronometer.
```c++
chronometer():active{false},t0{},t1{}{}
```
### void run(); 
start the chronometer.

### void stop();
stop the chronomter.

### void reset();
reset the values of the chronometer.

### double get_time()const;
get the time in seconds ( the chronometer must be stoppped.)

