output: Schedule.o CoursePlan.o Preferences.o  RelatedCourseList.o main.o
	g++ Schedule.o CoursePlan.o Preferences.o  RelatedCourseList.o main.o -o a.out

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

Schedule.o: Schedule.cpp
	g++ -std=c++17 -c Schedule.cpp Schedule.hpp

CoursePlan.o: CoursePlan.cpp
	g++ -std=c++17 -c CoursePlan.cpp CoursePlan.hpp

Preferences.o: Preferences.cpp
	g++ -std=c++17 -c Preferences.cpp Preferences.hpp

RelatedCourseList.o: RelatedCourseList.cpp
	g++ -std=c++17 -c RelatedCourseList.cpp RelatedCourseList.hpp

clean:
	rm *.o a.out