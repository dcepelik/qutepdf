#include <iostream>
#include <memory>
#include <vector>

#include "Container.hpp"

using namespace std;


Container::Container(string name) : Element(name)
{
}


void
Container::expand()
{
	
}


void
Container::dump(int level)
{	
	Element::dump(level);

	for (auto elem = children.begin(); elem != children.end(); elem++) {
		(*elem)->dump(level + 1);
	}
}


void
Container::removeEmptyChildren()
{
	auto it = children.begin();

	while (it != children.end()) {
		if ((*it)->empty()) {
			it = children.erase(it);
		}
		else {
			(*it)->removeEmptyChildren();
			it++;
		}
	}
}


bool
Container::empty()
{
	for (auto child = children.begin(); child != children.end(); child++) {
		if (!(*child)->empty()) {
			return false;
		}
	}

	return true;
}