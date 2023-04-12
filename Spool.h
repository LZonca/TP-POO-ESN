#include "Job.h"
class Spool
{
private:
		static int numberOfSpool;
		int id;
		int numberOfJobs;
		int numberOfPrior;
		//Job Jobs[];

public:
	Spool(int id, int nbJobs, int nbPrior);
};

