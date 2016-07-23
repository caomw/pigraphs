#include "jace/proxy/java/lang/Object.h"

/**
 * Standard Jace headers needed to implement this class.
 */
#include "jace/JArguments.h"
#include "jace/JMethod.h"
#include "jace/JField.h"
#include "jace/JClassImpl.h"
#include "jace/BoostWarningOff.h"
#include <boost/thread/mutex.hpp>
#include "jace/BoostWarningOn.h"

/**
 * Headers for the classes that this class uses.
 */
#include "jace/proxy/types/JLong.h"
#include "jace/proxy/types/JBoolean.h"
#include "jace/proxy/types/JVoid.h"
#include "jace/proxy/types/JInt.h"
#include "jace/proxy/java/lang/String.h"

BEGIN_NAMESPACE_4(jace, proxy, java, lang)

/**
 * The Jace C++ proxy class source for java/lang/Object.
 * Please do not edit this source, as any changes you make will be overwritten.
 * For more information, please refer to the Jace Developer's Guide.
 */
#define Object_INITIALIZER

Object Object::Factory::create(){
  JArguments arguments;
  jobject localRef = newObject(Object::staticGetJavaJniClass(), arguments);
  Object result = Object(localRef);
  JNIEnv* env = attach();
  deleteLocalRef(env, localRef);
  return result;
}

::jace::proxy::types::JInt Object::hashCode()
{
  JArguments arguments;
  return JMethod< ::jace::proxy::types::JInt >("hashCode").invoke(*this, arguments);
}

::jace::proxy::types::JBoolean Object::equals(::jace::proxy::java::lang::Object p0)
{
  JArguments arguments;
  arguments << p0;
  return JMethod< ::jace::proxy::types::JBoolean >("equals").invoke(*this, arguments);
}

::jace::proxy::java::lang::String Object::toString()
{
  JArguments arguments;
  return JMethod< ::jace::proxy::java::lang::String >("toString").invoke(*this, arguments);
}

void Object::notify()
{
  JArguments arguments;
  JMethod< ::jace::proxy::types::JVoid >("notify").invoke(*this, arguments);
}

void Object::notifyAll()
{
  JArguments arguments;
  JMethod< ::jace::proxy::types::JVoid >("notifyAll").invoke(*this, arguments);
}

void Object::wait(::jace::proxy::types::JLong p0)
{
  JArguments arguments;
  arguments << p0;
  JMethod< ::jace::proxy::types::JVoid >("wait").invoke(*this, arguments);
}

void Object::wait(::jace::proxy::types::JLong p0, ::jace::proxy::types::JInt p1)
{
  JArguments arguments;
  arguments << p0 << p1;
  JMethod< ::jace::proxy::types::JVoid >("wait").invoke(*this, arguments);
}

void Object::wait()
{
  JArguments arguments;
  JMethod< ::jace::proxy::types::JVoid >("wait").invoke(*this, arguments);
}

/**
 * Creates a new null reference.
 * 
 * All subclasses of JObject should provide this constructor
 * for their own subclasses.
 */
Object::Object()
{}

Object::Object(jvalue value) Object_INITIALIZER
{
  setJavaJniValue(value);
}

Object::Object(jobject object) Object_INITIALIZER
{
  setJavaJniObject(object);
}

Object::Object(const Object& object) Object_INITIALIZER
{
  setJavaJniObject(object);
}

/**
 * Provide the standard "System.out.println()" semantics for ostreams.
 */
std::ostream& operator<<(std::ostream& out, Object& object)
{
  out << object.toString();
  return out;
}
/**
 * The following methods are required to integrate this class
 * with the Jace framework.
 */
static boost::mutex javaClassMutex;
const JClass& Object::staticGetJavaJniClass() throw (::jace::JNIException)
{
  static boost::shared_ptr<JClassImpl> result;
  boost::mutex::scoped_lock lock(javaClassMutex);
  if (result == 0)
    result = boost::shared_ptr<JClassImpl>(new JClassImpl("java/lang/Object"));
  return *result;
}

const JClass& Object::getJavaJniClass() const throw (::jace::JNIException)
{
  return Object::staticGetJavaJniClass();
}

END_NAMESPACE_4(jace, proxy, java, lang)

BEGIN_NAMESPACE(jace)

#ifndef PUT_TSDS_IN_HEADER
  template <> inline ElementProxy< ::jace::proxy::java::lang::Object >::ElementProxy(jarray array, jvalue element, int _index): 
    Object(element), index(_index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, array));
  }
  template <> inline ElementProxy< ::jace::proxy::java::lang::Object >::ElementProxy(const jace::ElementProxy< ::jace::proxy::java::lang::Object >& proxy): 
    Object(proxy), index(proxy.index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, proxy.parent));
  }
#endif
#ifndef PUT_TSDS_IN_HEADER
  template <> inline JFieldProxy< ::jace::proxy::java::lang::Object >::JFieldProxy(jfieldID _fieldID, jvalue value, jobject _parent): 
    Object(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    if (_parent)
      parent = newGlobalRef(env, _parent);
    else
      parent = _parent;

    parentClass = 0;
  }
  template <> inline JFieldProxy< ::jace::proxy::java::lang::Object >::JFieldProxy(jfieldID _fieldID, jvalue value, jclass _parentClass): 
    Object(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    parent = 0;
    parentClass = static_cast<jclass>(newGlobalRef(env, _parentClass));
  }
  template <> inline JFieldProxy< ::jace::proxy::java::lang::Object >::JFieldProxy(const JFieldProxy< ::jace::proxy::java::lang::Object >& object): 
    Object(object)
  {
    fieldID = object.fieldID; 

    if (object.parent)
    {
      JNIEnv* env = attach();
      parent = newGlobalRef(env, object.parent);
    }
    else
      parent = 0;

    if (object.parentClass)
    {
      JNIEnv* env = attach();
      parentClass = static_cast<jclass>(newGlobalRef(env, object.parentClass));
    }
    else
      parentClass = 0;
  }
#endif

END_NAMESPACE(jace)

