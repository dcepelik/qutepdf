#pragma once

#include <vector>

#include "Container.hpp"

namespace BoxModel
{
	class List : public Container
	{
	protected:
		int maxSize;


		List(int maxSize) : Container()
		{
			this->maxSize = maxSize;
		}

		void divideSpaces();

		virtual int getBoxSize(shared_ptr<Box> box) = 0;
	};
}