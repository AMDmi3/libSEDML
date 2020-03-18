/**
 * @file SedWaterfallPlot.h
 * @brief Definition of the SedWaterfallPlot class.
 * @author DEVISER
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML. Please visit http://sed-ml.org for more
 * information about SED-ML. The latest version of libSEDML can be found on
 * github: https://github.com/fbergmann/libSEDML/
 * 

 * Copyright (c) 2013-2019, Frank T. Bergmann
 * All rights reserved.
 * 

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 

 * 1. Redistributions of source code must retain the above copyright notice,
 * this
 * list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class SedWaterfallPlot
 * @sbmlbrief{sedml} TODO:Definition of the SedWaterfallPlot class.
 */


#ifndef SedWaterfallPlot_H__
#define SedWaterfallPlot_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedPlot.h>
#include <sbml/common/libsbml-namespace.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


class LIBSEDML_EXTERN SedWaterfallPlot : public SedPlot
{
protected:

  /** @cond doxygenLibSEDMLInternal */

  std::string mTaskRef;

  /** @endcond */

public:

  /**
   * Creates a new SedWaterfallPlot using the given SEDML Level and @ p version
   * values.
   *
   * @param level an unsigned int, the SEDML Level to assign to this
   * SedWaterfallPlot.
   *
   * @param version an unsigned int, the SEDML Version to assign to this
   * SedWaterfallPlot.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedWaterfallPlot(unsigned int level = SEDML_DEFAULT_LEVEL,
                   unsigned int version = SEDML_DEFAULT_VERSION);


  /**
   * Creates a new SedWaterfallPlot using the given SedNamespaces object @p
   * sedmlns.
   *
   * @param sedmlns the SedNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedWaterfallPlot(SedNamespaces *sedmlns);


  /**
   * Copy constructor for SedWaterfallPlot.
   *
   * @param orig the SedWaterfallPlot instance to copy.
   */
  SedWaterfallPlot(const SedWaterfallPlot& orig);


  /**
   * Assignment operator for SedWaterfallPlot.
   *
   * @param rhs the SedWaterfallPlot object whose values are to be used as the
   * basis of the assignment.
   */
  SedWaterfallPlot& operator=(const SedWaterfallPlot& rhs);


  /**
   * Creates and returns a deep copy of this SedWaterfallPlot object.
   *
   * @return a (deep) copy of this SedWaterfallPlot object.
   */
  virtual SedWaterfallPlot* clone() const;


  /**
   * Destructor for SedWaterfallPlot.
   */
  virtual ~SedWaterfallPlot();


  /**
   * Returns the value of the "taskRef" attribute of this SedWaterfallPlot.
   *
   * @return the value of the "taskRef" attribute of this SedWaterfallPlot as a
   * string.
   */
  const std::string& getTaskRef() const;


  /**
   * Predicate returning @c true if this SedWaterfallPlot's "taskRef" attribute
   * is set.
   *
   * @return @c true if this SedWaterfallPlot's "taskRef" attribute has been
   * set, otherwise @c false is returned.
   */
  bool isSetTaskRef() const;


  /**
   * Sets the value of the "taskRef" attribute of this SedWaterfallPlot.
   *
   * @param taskRef std::string& value of the "taskRef" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setTaskRef(const std::string& taskRef);


  /**
   * Unsets the value of the "taskRef" attribute of this SedWaterfallPlot.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetTaskRef();


  /**
   * @copydoc doc_renamesidref_common
   */
  virtual void renameSIdRefs(const std::string& oldid,
                             const std::string& newid);


  /**
   * Returns the XML element name of this SedWaterfallPlot object.
   *
   * For SedWaterfallPlot, the XML element name is always @c "waterfallPlot".
   *
   * @return the name of this element, i.e. @c "waterfallPlot".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSEDML type code for this SedWaterfallPlot object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SEDML type code for this object:
   * @sedmlconstant{SEDML_WATERFALLPLOT, SedTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * SedWaterfallPlot object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * SedWaterfallPlot have been set, otherwise @c false is returned.
   *
   *
   * @note The required attributes for the SedWaterfallPlot object are:
   * @li "taskRef"
   */
  virtual bool hasRequiredAttributes() const;



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLOutputStream&
    stream) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Accepts the given SedVisitor
   */
  virtual bool accept(SedVisitor& v) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the parent SedDocument
   */
  virtual void setSedDocument(SedDocument* d);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Predicate returning @c true if this SedWaterfallPlot's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this SedWaterfallPlot's attribute "attributeName" has
   * been set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this
   * SedWaterfallPlot.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */




  #endif /* !SWIG */


protected:


  /** @cond doxygenLibSEDMLInternal */

  /**
   * Creates a new object from the next XMLToken on the XMLInputStream
   */
  virtual SedBase* createObject(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLInputStream&
    stream);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Adds the expected attributes for this element
   */
  virtual void addExpectedAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER
    ExpectedAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  virtual void readAttributes(
                              const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                XMLAttributes& attributes,
                              const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                ExpectedAttributes& expectedAttributes);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLOutputStream&
    stream) const;

  /** @endcond */


};



LIBSEDML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSEDML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Creates a new SedWaterfallPlot_t using the given SEDML Level and @ p version
 * values.
 *
 * @param level an unsigned int, the SEDML Level to assign to this
 * SedWaterfallPlot_t.
 *
 * @param version an unsigned int, the SEDML Version to assign to this
 * SedWaterfallPlot_t.
 *
 * @copydetails doc_note_setting_lv_pkg
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
SedWaterfallPlot_t *
SedWaterfallPlot_create(unsigned int level, unsigned int version);


/**
 * Creates and returns a deep copy of this SedWaterfallPlot_t object.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @return a (deep) copy of this SedWaterfallPlot_t object.
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
SedWaterfallPlot_t*
SedWaterfallPlot_clone(const SedWaterfallPlot_t* swp);


/**
 * Frees this SedWaterfallPlot_t object.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
void
SedWaterfallPlot_free(SedWaterfallPlot_t* swp);


/**
 * Returns the value of the "taskRef" attribute of this SedWaterfallPlot_t.
 *
 * @param swp the SedWaterfallPlot_t structure whose taskRef is sought.
 *
 * @return the value of the "taskRef" attribute of this SedWaterfallPlot_t as a
 * pointer to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
char *
SedWaterfallPlot_getTaskRef(const SedWaterfallPlot_t * swp);


/**
 * Predicate returning @c 1 (true) if this SedWaterfallPlot_t's "taskRef"
 * attribute is set.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @return @c 1 (true) if this SedWaterfallPlot_t's "taskRef" attribute has
 * been set, otherwise @c 0 (false) is returned.
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
int
SedWaterfallPlot_isSetTaskRef(const SedWaterfallPlot_t * swp);


/**
 * Sets the value of the "taskRef" attribute of this SedWaterfallPlot_t.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @param taskRef const char * value of the "taskRef" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
int
SedWaterfallPlot_setTaskRef(SedWaterfallPlot_t * swp, const char * taskRef);


/**
 * Unsets the value of the "taskRef" attribute of this SedWaterfallPlot_t.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
int
SedWaterfallPlot_unsetTaskRef(SedWaterfallPlot_t * swp);


/**
 * Predicate returning @c 1 (true) if all the required attributes for this
 * SedWaterfallPlot_t object have been set.
 *
 * @param swp the SedWaterfallPlot_t structure.
 *
 * @return @c 1 (true) to indicate that all the required attributes of this
 * SedWaterfallPlot_t have been set, otherwise @c 0 (false) is returned.
 *
 *
 * @note The required attributes for the SedWaterfallPlot_t object are:
 * @li "taskRef"
 *
 * @memberof SedWaterfallPlot_t
 */
LIBSEDML_EXTERN
int
SedWaterfallPlot_hasRequiredAttributes(const SedWaterfallPlot_t * swp);




END_C_DECLS




LIBSEDML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !SedWaterfallPlot_H__ */


