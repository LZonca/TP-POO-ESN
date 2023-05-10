#include "Job.h"
#include <list>
class Spool
{
private:
		//static int numberOfSpool;
		int id;
		int numberOfJobs;
		int numberOfPrior;
		std::list<Job> Jobs; 

public:

	Spool(int id, int nbJobs, int nbPrior);
	Spool();
	void viewSpoolInformations();
	int getNumberOfJobInSpool();
	int getNumberOfPriorInSpool();
	void listInsert(Job j);
	std::string getViewList();
	//static int getNumberOfSpool();
};

