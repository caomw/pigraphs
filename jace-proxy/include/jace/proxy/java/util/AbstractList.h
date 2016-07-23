#ifndef JACE_PROXY_JAVA_UTIL_ABSTRACTLIST_H
#define JACE_PROXY_JAVA_UTIL_ABSTRACTLIST_H

#include "jace/OsDep.h"
#include "jace/Namespace.h"
#include "jace/proxy/JObject.h"
#include "jace/JArray.h"
#include "jace/JFieldProxy.h"
#include "jace/JMethod.h"
#include "jace/JField.h"
#include "jace/JClassImpl.h"

/**
 * The super class for this class.
 */
#include "jace/proxy/java/util/AbstractCollection.h"
/**
 * The interfaces implemented by this class.
 */
#include "jace/proxy/java/util/List.h"
/**
 * Forward declarations for the classes that this class uses.
 */
BEGIN_NAMESPACE_3(jace, proxy, types)
class JBoolean;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_3(jace, proxy, types)
class JVoid;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_3(jace, proxy, types)
class JInt;
END_NAMESPACE_3(jace, proxy, types)

BEGIN_NAMESPACE_4(jace, proxy, java, util)
class Collection;
END_NAMESPACE_4(jace, proxy, java, util)

BEGIN_NAMESPACE_4(jace, proxy, java, lang)
class Object;
END_NAMESPACE_4(jace, proxy, java, lang)


BEGIN_NAMESPACE_4(jace, proxy, java, util)

/**
 * The Jace C++ proxy class for java.util.AbstractList.
 * Please do not edit this class, as any changes you make will be overwritten.
 * For more information, please refer to the Jace Developer's Guide.
 */
class AbstractList: public ::jace::proxy::java::util::AbstractCollection, public virtual ::jace::proxy::java::util::List
{
  public:
  public: 
  /**
   * Creates a new null reference.
   * 
   * All subclasses of JObject should provide this constructor
   * for their own subclasses.
   */
  JACE_PROXY_API explicit AbstractList();
  /**
   * Copy an existing reference.
   */
  JACE_PROXY_API AbstractList(const AbstractList&);
  /**
   * add
   */
  JACE_PROXY_API ::jace::proxy::types::JBoolean add(::jace::proxy::java::lang::Object p0);
  /**
   * get
   */
  JACE_PROXY_API ::jace::proxy::java::lang::Object get(::jace::proxy::types::JInt p0);
  /**
   * set
   */
  JACE_PROXY_API ::jace::proxy::java::lang::Object set(::jace::proxy::types::JInt p0, ::jace::proxy::java::lang::Object p1);
  /**
   * add
   */
  JACE_PROXY_API void add(::jace::proxy::types::JInt p0, ::jace::proxy::java::lang::Object p1);
  /**
   * remove
   */
  JACE_PROXY_API ::jace::proxy::java::lang::Object remove(::jace::proxy::types::JInt p0);
  /**
   * indexOf
   */
  JACE_PROXY_API ::jace::proxy::types::JInt indexOf(::jace::proxy::java::lang::Object p0);
  /**
   * lastIndexOf
   */
  JACE_PROXY_API ::jace::proxy::types::JInt lastIndexOf(::jace::proxy::java::lang::Object p0);
  /**
   * clear
   */
  JACE_PROXY_API void clear();
  /**
   * addAll
   */
  JACE_PROXY_API ::jace::proxy::types::JBoolean addAll(::jace::proxy::types::JInt p0, ::jace::proxy::java::util::Collection p1);
  /**
   * subList
   */
  JACE_PROXY_API ::jace::proxy::java::util::List subList(::jace::proxy::types::JInt p0, ::jace::proxy::types::JInt p1);
  /**
   * equals
   */
  JACE_PROXY_API ::jace::proxy::types::JBoolean equals(::jace::proxy::java::lang::Object p0);
  /**
   * hashCode
   */
  JACE_PROXY_API ::jace::proxy::types::JInt hashCode();
  JACE_PROXY_API virtual const JClass& getJavaJniClass() const throw (::jace::JNIException);
  JACE_PROXY_API static const JClass& staticGetJavaJniClass() throw (::jace::JNIException);
  JACE_PROXY_API explicit AbstractList(jvalue);
  JACE_PROXY_API explicit AbstractList(jobject);
private:
  /**
   * The following methods are required to integrate this class
   * with the Jace framework.
   */
  template <typename T> friend T (::jace::java_cast)(const ::jace::proxy::JObject&);
  template <typename T> friend T (::jace::java_new)();
  template <typename T, typename A0> friend T (::jace::java_new)(A0 a0);
  template <typename T, typename A0, typename A1> friend T (::jace::java_new)(A0 a0, A1 a1);
  template <typename T, typename A0, typename A1, typename A2> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2);
  template <typename T, typename A0, typename A1, typename A2, typename A3> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8);
  template <typename T, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9> friend T (::jace::java_new)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9);
  template <typename T> friend T (::jace::java_new)(const char*);
  template <typename T> friend T (::jace::java_new)(const ::std::string&);
  template <typename T> friend class ::jace::ElementProxy;
  template <typename T> friend class ::jace::JFieldProxy;
  template <typename T> friend class ::jace::JMethod;
};

END_NAMESPACE_4(jace, proxy, java, util)

BEGIN_NAMESPACE(jace)

#ifndef PUT_TSDS_IN_HEADER
  template <> ElementProxy< ::jace::proxy::java::util::AbstractList >::ElementProxy(jarray array, jvalue element, int index);
  template <> ElementProxy< ::jace::proxy::java::util::AbstractList >::ElementProxy(const jace::ElementProxy< ::jace::proxy::java::util::AbstractList >& proxy);
#else
  template <> inline ElementProxy< ::jace::proxy::java::util::AbstractList >::ElementProxy(jarray array, jvalue element, int _index): 
    ::jace::proxy::java::util::AbstractList(element), index(_index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, array));
  }
  template <> inline ElementProxy< ::jace::proxy::java::util::AbstractList >::ElementProxy(const jace::ElementProxy< ::jace::proxy::java::util::AbstractList >& proxy): 
    ::jace::proxy::java::util::AbstractList(proxy), index(proxy.index)
  {
    JNIEnv* env = attach();
    parent = static_cast<jarray>(newGlobalRef(env, proxy.parent));
  }
#endif

#ifndef PUT_TSDS_IN_HEADER
  template <> JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(jfieldID _fieldID, jvalue value, jobject _parent);
  template <> JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(jfieldID _fieldID, jvalue value, jclass _parentClass);
  template <> JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(const ::jace::JFieldProxy< ::jace::proxy::java::util::AbstractList >& object);
#else
  template <> inline JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(jfieldID _fieldID, jvalue value, jobject _parent): 
    ::jace::proxy::java::util::AbstractList(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    if (_parent)
      parent = newGlobalRef(env, _parent);
    else
      parent = _parent;

    parentClass = 0;
  }
  template <> inline JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(jfieldID _fieldID, jvalue value, jclass _parentClass): 
    ::jace::proxy::java::util::AbstractList(value), fieldID(_fieldID)
  {
    JNIEnv* env = attach();

    parent = 0;
    parentClass = static_cast<jclass>(newGlobalRef(env, _parentClass));
  }
  template <> inline JFieldProxy< ::jace::proxy::java::util::AbstractList >::JFieldProxy(const JFieldProxy< ::jace::proxy::java::util::AbstractList >& object): 
    ::jace::proxy::java::util::AbstractList(object)
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

#endif // #ifndef JACE_PROXY_JAVA_UTIL_ABSTRACTLIST_H

