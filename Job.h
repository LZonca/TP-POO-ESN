#include <iostream>
#include <string>

class Job
{

private:
	static int numberOfJobs;
	int id;
	std::string name;
	bool prior;

public:
	Job(int i, std::string n, bool p);
	Job();
	Job(int i, std::string n);
	std::string viewJobInformations();
	
};

