#include "Job.h"
#include <string>

Job::Job(int i, std::string n, bool p) {
	this->id = i;
	this->name = n;
	this->prior = p;
}

Job::Job(int i, std::string n) {
	this->id = i;
	this->name = n;
	this->prior = false;
}

Job::Job() {
	this->id = 0;
	this->name = "";
	this->prior = false;
}

std::string Job::viewJobInformations() {
	if (this->prior == true) {
		return "Job ID: " + std::to_string(this->id) + ";Job nom: " + this->name + "; Job prior: True";
	}
	else {
		return "Job ID: " + std::to_string(this->id) + "; Job nom: " + this->name + "; Job prior: True";
	}
}
