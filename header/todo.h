
#ifndef TODOLIST_H
#define TODOLIST_H

#include <string>

enum Priority {
	LOW = 0,
	MEDIUM = 1,
	HIGH = 2
};

struct Task {
	// Values
	int id;
	std::string task_name;
	Priority priority;
	bool finished;

	// Gets
	std::string get_Name();
	Priority get_Priority();
	bool is_Finished();

	// Setters
	std::string set_Name(std::string _name);
	Priority set_Priority(Priority _priority);
	bool set_ChangeFinished();
};

class TodoList {

	public:
		TodoList(std::string _name);

		std::string get_Name();
		int get_ListLength();
		void add_Task(Task& _task);
		void remove_Task(int _id);
		void list_Tasks();

	private:
		std::string name;
		int list_length = 0;
		Task list[10];
};

#endif
