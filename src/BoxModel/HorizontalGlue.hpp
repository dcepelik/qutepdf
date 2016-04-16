#pragma once

#include "Box.hpp"


namespace BoxModel
{
	class HorizontalGlue : public Box
	{
	public:
		HorizontalGlue();

		void dump();
		void writePSOutput(ostream &out);
		BoxType getType(); 
	};
}
