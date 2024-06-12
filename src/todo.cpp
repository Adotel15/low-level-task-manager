#include <iostream>
#include "../header/Todo.h"

void print_task(Task& _task) {
	std::cout << "Tarea " << _task.id << std::endl;
	std::cout << _task.get_Name() << std::endl;
	std::cout << _task.get_Priority() << std::endl;
	std::cout << _task.is_Finished() << std::endl;
}

TodoList::TodoList(std::string _name) { this->name = _name; };

std::string TodoList::get_Name() { return this->name; };

int TodoList::get_ListLength() { return this->list_length;  };

void TodoList::add_Task(Task& _task){
	this->list[0] = _task;
	++this->list_length;
}

void TodoList::remove_Task(int _id) {
	int position_task;

	for (int i = 0; i < this->list_length; ++i){
		if (list[i].id == _id) {
			position_task = i;
			break;
		}
	}

	for (int i = position_task; i < this->list_length - 1; ++i) {
		this->list[i] = this->list[i + 1];
	}

	--this->list_length;
}

void TodoList::list_Tasks() {
	for (int i = 0; i < this->list_length; ++i) {
		print_task(this->list[i]);
	}
}

std::string Task::get_Name() { return this->task_name; }

Priority Task::get_Priority() { return this->priority; }

bool Task::is_Finished() { return this->finished;  }

std::string Task::set_Name(std::string _name) {
	this->task_name = _name;
	return this->task_name;
}

Priority Task::set_Priority(Priority _priority) {
	this->priority = _priority;
	return this->priority;
};


bool Task::set_ChangeFinished() {
	this->finished = !this->finished;
	return this->finished;
}



