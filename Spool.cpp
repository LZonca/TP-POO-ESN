#include "Spool.h"
#include <iostream>
Spool::Spool(int id, int nbJobs, int nbPrior) {
	this->id = id;
	this->numberOfJobs = nbJobs;
	this->numberOfPrior = nbPrior;
	//this->numberOfSpool++;
}

Spool::Spool() {
	this->id = 0;
	this->numberOfJobs = 0;
	this->numberOfPrior = 0;
	//this->numberOfSpool++;
}

void Spool::viewSpoolInformations() {
	std::cout << "Spool ID: " << this->id << "; Number of Jobs: " << this->numberOfJobs << "; Number of Prior: " << this->numberOfPrior << std::endl;
}

int Spool::getNumberOfJobInSpool() {
	return this->numberOfJobs;
}

int Spool::getNumberOfPriorInSpool() {
	return this->numberOfPrior;
}

void Spool::listInsert(Job j) {
	this->Jobs.push_back(j);
	this->numberOfJobs++;
	std::string prior = "; Job prior: True";
	if (j.viewJobInformations().find(prior) != std::string::npos) {
		this->numberOfPrior++;
	}
}

std::string Spool::getViewList() {
	std::string result;
	for (Job element : this->Jobs) {
		//std::cout << element.viewJobInformations() << std::endl; // Debug
		result = result + "\n" + element.viewJobInformations();
	}
	//std::cout << "Result: " << result; // Debug
	return result;
}

//int Spool::getNumberOfSpool() {
//	return numberOfSpool;
//}