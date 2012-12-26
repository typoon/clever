/**
 * Clever programming language
 * Copyright (c) 2011-2012 Clever Team
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef CLEVER_VALUE_H
#define CLEVER_VALUE_H

#include "compiler/clever.h"
#include "compiler/refcounted.h"
#include "types/type.h"
#include "types/native_types.h"

namespace clever {

class Value : public RefCounted {
public:
	union DataValue {
		long lval;
		double dval;
		const CString* sval;
		void* obj;

		DataValue() : lval(0) {}
		DataValue(long value) : lval(value) {}
		DataValue(double value) : dval(value) {}
		DataValue(void* value) : obj(value) {}
		DataValue(const CString* value) : sval(value) {}
	};

	Value() : m_data(), m_type() {}
	Value(long n) : m_data(n), m_type(CLEVER_INT_TYPE) {}
	Value(double n) : m_data(n), m_type(CLEVER_DOUBLE_TYPE) {}
	//Value(const CString* value) : m_data(value), m_type(CLEVER_STR_TYPE) {}

	~Value() {}

	const Type* getType() const { return m_type; }

	void dump() const {
		if (m_type) {
			m_type->dump(&m_data);
		}
	}
private:
	DataValue m_data;
	const Type* m_type;
};

} // clever

#endif // CLEVER_VALUE_H
