#include "Job.h"
#include <string>

Job::Job(int i, std::string n, bool p) {
	this->id = i;
	this->name = n;
	this->prior = p;
	//this->numberOfJobs++;
}

Job::Job(){
	this->id = 0;
	this->name = "";
	this->prior = false;
	//this->numberOfJobs++;
}

Job::Job(int i, std::string n) {
	this->id = i;
	this->name = n;
	this->prior = false;
	//this->numberOfJobs++;
}

std::string Job::viewJobInformations() {
	if (this->prior == true) {
		return "Job ID: " + std::to_string(this->id) + "; Job nom: " + this->name + "; Job prior: True";
	}
	else {
		return "Job ID: " + std::to_string(this->id) + "; Job nom: " + this->name + "; Job prior: False";
	}
}

//int Job::getNumberOfJobs(){
//	return numberOfJobs;
//}