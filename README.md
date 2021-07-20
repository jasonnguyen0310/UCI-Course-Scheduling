# UCI Course Scheduling

# Problem
The university offers courses each term. The challenge is to assign courses to time slots so to satisfy the 
numerous constraints. This problem is currently solved by humans, but it is very difficult and often leads to 
scheduling mistakes. Such a program could eventually assign course meetings to available classrooms, but 
that is a future extension. (Note it is always good to think about future extensions, but to be explicit that we are 
not going to do them now.)


Scheduling courses to timeslots is a constraint satisfaction problem that is **NP complete**. There may be 
multiple possible solutions, but the problem space is so large, finding even one solution can take more time 
than we have. We can use an effective AI algorithm to find one of the many solutions.


We can simplify the problem while still planning for the future extensions. For example, 
we can ignore room assignments and we can schedule courses for one specific school or department. We can further divide 
various constraints into phases to avoid being overwhelmed by the complexity of the problem.

# Source of Constraints
● Specific instructors are assigned to specific courses (their lectures can’t be at the same time). 
● Lectures may have labs and/or discussion sections (these can can not be at the same time as lecture). 
● The university publishes suggested course plans for students by major to help them choose which 
courses to take each term (so these courses should not conflict with each other).
● Additionally, instructors have preferences for when they would like to (or when they are available to) 
teach.

# Input Files
**inputSchedule** is a list of the courses, their initial day format (e.g. MWF, TR) and time slot (9:10am, 24-hour 
format) plus duration in minutes. The initial file could be the schedule from the previous year, but with new 
courses added. Time does not matter, e.g., all the courses could be scheduled at the same time (MWF 8am). 
Other courses should be moved to minimize the number of constraint violations. Courses are scheduled in 30-
minute slots with a ten-minute break before the start of every course. (So a course can be 50, 80, 110,… 
minutes long and start at 9:10, 9:40, 10:10, 10:40 and so on).


course => I&C SCI 31<br />
type => LEC<br /><br />
days => TR<br />
start-time => 910<br />
duration => 80<br />
instructor => KLEFSTAD<br />
course => I&C SCI 31<br />
type => DIS<br />
days => W<br />
start-time => 910duration => 80<br />
instructor => KLEFSTAD<br />


**coursePlans** lists courses that should be taken together.


**instructors** lists the teaching preferences/availability of each instructor, e.g., Klefstad likes to teach between 
9am and 3pm.


## Approach: Hill Climbing

A given problem may have many solutions. However, the number of constraints is quite large and difficult for a 
human to solve. It is an ideal application of **Hill Climbing** which is based on **Gradient Descent** (or Ascent in this 
case). An optimal solution lies at the peak of some mountain in the problem search space, e.g., the Global 
Maxima in the figure above. Start with some solution (even a really poor one) and evaluate the quality of that 
solution using an evaluation function. To find the peak, look at all (or each one in turn) of the neighboring 
points. If a change improves the current solution (move upward) make that move. The algorithm can pick the 
best improvement (expensive, Discrete Space Hill Climbing) or just any improvement (easy, Greedy Hill 
Climbing). One weakness of Hill Climbing is that some problem spaces have local maxima (smaller 
peaks) where we can end up and get stuck. If we get on to one of these local maxima humps, we may never 
find the global maxima because that would require going down hill for quite a while to cross the saddle point. 
There is an approach to dealing with this problem called **Simulated Anealing**.


## Citation

All project details and documentation belong to [Professor Klefstad's](https://www.ics.uci.edu/~klefstad/) CS 103 at the University of California Irvine.
