#ifndef _BYPASS_DOCUMENT_H_
#define _BYPASS_DOCUMENT_H_

#include "block_element.h"

namespace Bypass
{
	class Document
	{
	private:

	public:
		Document();
		~Document();
		void append(BlockElement* blockElement);
	};

}

#endif // _BYPASS_DOCUMENT_H_
