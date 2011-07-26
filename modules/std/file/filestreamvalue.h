/* The above copyright notice and this permission notice shall be
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
 * $Id$
 */

#ifndef CLEVER_FILESTREAMVALUE_H
#define CLEVER_FILESTREAMVALUE_H
#include <fstream>
#include "compiler/datavalue.h"

struct FileStreamValue : public DataValue
{
	FileStreamValue() : m_is_open(false) {}
	
	// File stream 
	::std::fstream m_fstream;
	
	// If there is a open stream
	bool m_is_open;
	
	~FileStreamValue() {}
};

#endif