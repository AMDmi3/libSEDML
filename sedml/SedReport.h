/**
 * @file:   SedReport.h
 * @brief:  Implementation of the SedReport class
 * @author: Frank T. Bergmann
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML.  Please visit http://sed-ml.org for more
 * information about SEDML, and the latest version of libSEDML.
 *
 * Copyright (c) 2013, Frank T. Bergmann  
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ------------------------------------------------------------------------ -->
 */


#ifndef SedReport_H__
#define SedReport_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedBase.h>
#include <sedml/SedListOf.h>
#include <sedml/SedNamespaces.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


#include <sedml/SedOutput.h>
#include <sedml/SedDataSet.h>


class LIBSEDML_EXTERN SedReport : public SedOutput
{

protected:

	SedListOfDataSets   mDataSets;


public:

	/**
	 * Creates a new SedReport with the given level, version, and package version.
	 *
	 * @param level an unsigned int, the SEDML Level to assign to this SedReport
	 *
	 * @param version an unsigned int, the SEDML Version to assign to this SedReport
	 *
	 * @param pkgVersion an unsigned int, the SEDML Sed Version to assign to this SedReport
	 */
	SedReport(unsigned int level      = SEDML_DEFAULT_LEVEL,
	          unsigned int version    = SEDML_DEFAULT_VERSION);


	/**
	 * Creates a new SedReport with the given SedNamespaces object.
	 *
	 * @param sedns the SedNamespaces object
	 */
	SedReport(SedNamespaces* sedns);


 	/**
	 * Copy constructor for SedReport.
	 *
	 * @param orig; the SedReport instance to copy.
	 */
	SedReport(const SedReport& orig);


 	/**
	 * Assignment operator for SedReport.
	 *
	 * @param rhs; the object whose values are used as the basis
	 * of the assignment
	 */
	SedReport& operator=(const SedReport& rhs);


 	/**
	 * Creates and returns a deep copy of this SedReport object.
	 *
	 * @return a (deep) copy of this SedReport object.
	 */
	virtual SedReport* clone () const;


 	/**
	 * Destructor for SedReport.
	 */
	virtual ~SedReport();


 	/**
	 * Returns the  "SedListOfDataSets" in this SedReport object.
	 *
	 * @return the "SedListOfDataSets" attribute of this SedReport.
	 */
	const SedListOfDataSets* getListOfDataSets() const;


	/**
	 * Get a DataSet from the SedListOfDataSets.
	 *
	 * @param n the index number of the DataSet to get.
	 *
	 * @return the nth DataSet in the SedListOfDataSets within this SedReport.
	 *
	 * @see getNumDataSets()
	 */
	SedDataSet* getDataSet(unsigned int n);


	/**
	 * Get a DataSet from the SedListOfDataSets.
	 *
	 * @param n the index number of the DataSet to get.
	 *
	 * @return the nth DataSet in the SedListOfDataSets within this SedReport.
	 *
	 * @see getNumDataSets()
	 */
	const SedDataSet* getDataSet(unsigned int n) const;


	/**
	 * Get a DataSet from the SedListOfDataSets
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the DataSet to get.
	 *
	 * @return the DataSet in the SedListOfDataSets
	 * with the given id or NULL if no such
	 * DataSet exists.
	 *
	 * @see getDataSet(unsigned int n)
	 *
	 * @see getNumDataSets()
	 */
	SedDataSet* getDataSet(const std::string& sid);


	/**
	 * Get a DataSet from the SedListOfDataSets
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the DataSet to get.
	 *
	 * @return the DataSet in the SedListOfDataSets
	 * with the given id or NULL if no such
	 * DataSet exists.
	 *
	 * @see getDataSet(unsigned int n)
	 *
	 * @see getNumDataSets()
	 */
	const SedDataSet* getDataSet(const std::string& sid) const;


	/**
	 * Adds a copy the given "SedDataSet" to this SedReport.
	 *
	 * @param sds; the SedDataSet object to add
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	int addDataSet(const SedDataSet* sds);


	/**
	 * Get the number of SedDataSet objects in this SedReport.
	 *
	 * @return the number of SedDataSet objects in this SedReport
	 */
	unsigned int getNumDataSets() const;


	/**
	 * Creates a new SedDataSet object, adds it to this SedReports
	 * SedListOfDataSets and returns the SedDataSet object created. 
	 *
	 * @return a new SedDataSet object instance
	 *
	 * @see addDataSet(const SedDataSet* sds)
	 */
	SedDataSet* createDataSet();


	/**
	 * Removes the nth DataSet from the SedListOfDataSets within this SedReport.
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 *
	 * @param n the index of the DataSet to remove.
	 *
	 * @see getNumDataSets()
	 */
	SedDataSet* removeDataSet(unsigned int n);


	/**
	 * Removes the DataSet with the given identifier from the SedListOfDataSets within this SedReport
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 * If none of the items in this list have the identifier @p sid, then
	 * @c NULL is returned.
	 *
	 * @param sid the identifier of the DataSet to remove.
	 *
	 * @return the DataSet removed. As mentioned above, the caller owns the
	 * returned item.
	 */
	SedDataSet* removeDataSet(const std::string& sid);


	/**
	 * Returns the XML element name of this object, which for SedReport, is
	 * always @c "sedReport".
	 *
	 * @return the name of this element, i.e. @c "sedReport".
	 */
	virtual const std::string& getElementName () const;


	/**
	 * Returns the libSEDML type code for this SEDML object.
	 * 
	 * @if clike LibSEDML attaches an identifying code to every kind of SEDML
	 * object.  These are known as <em>SEDML type codes</em>.  The set of
	 * possible type codes is defined in the enumeration #SEDMLTypeCode_t.
	 * The names of the type codes all begin with the characters @c
	 * SEDML_. @endif@if java LibSEDML attaches an identifying code to every
	 * kind of SEDML object.  These are known as <em>SEDML type codes</em>.  In
	 * other languages, the set of type codes is stored in an enumeration; in
	 * the Java language interface for libSEDML, the type codes are defined as
	 * static integer constants in the interface class {@link
	 * libsbmlConstants}.  The names of the type codes all begin with the
	 * characters @c SEDML_. @endif@if python LibSEDML attaches an identifying
	 * code to every kind of SEDML object.  These are known as <em>SEDML type
	 * codes</em>.  In the Python language interface for libSEDML, the type
	 * codes are defined as static integer constants in the interface class
	 * @link libsbml@endlink.  The names of the type codes all begin with the
	 * characters @c SEDML_. @endif@if csharp LibSEDML attaches an identifying
	 * code to every kind of SEDML object.  These are known as <em>SEDML type
	 * codes</em>.  In the C# language interface for libSEDML, the type codes
	 * are defined as static integer constants in the interface class @link
	 * libsbmlcs.libsbml@endlink.  The names of the type codes all begin with
	 * the characters @c SEDML_. @endif
	 *
	 * @return the SEDML type code for this object, or
	 * @link SEDMLTypeCode_t#SEDML_UNKNOWN SEDML_UNKNOWN@endlink (default).
	 *
	 * @see getElementName()
	 */
	virtual int getTypeCode () const;


	/**
	 * Predicate returning @c true if all the required attributes
	 * for this SedReport object have been set.
	 *
	 * @note The required attributes for a SedReport object are:
	 *
	 * @return a boolean value indicating whether all the required
	 * attributes for this object have been defined.
	 */
	virtual bool hasRequiredAttributes() const;


	/**
	 * Predicate returning @c true if all the required elements
	 * for this SedReport object have been set.
	 *
	 * @note The required elements for a SedReport object are:
	 *
	 * @return a boolean value indicating whether all the required
	 * elements for this object have been defined.
	 */
	virtual bool hasRequiredElements() const;


/** @cond doxygen-libsbml-internal */

	/**
	 * Subclasses should override this method to write out their contained
	 * SEDML objects as XML elements.  Be sure to call your parents
	 * implementation of this method as well.
	 */
	virtual void writeElements (XMLOutputStream& stream) const;


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Accepts the given SedVisitor.
	 */
	virtual bool accept (SedVisitor& v) const;


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Sets the parent SedDocument.
	 */
	virtual void setSedDocument (SedDocument* d);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Connects to child elements.
	 */
	virtual void connectToChild ();


/** @endcond doxygen-libsbml-internal */


protected:

/** @cond doxygen-libsbml-internal */

	/**
	 * return the SEDML object corresponding to next XMLToken.
	 */
	virtual SedBase* createObject(XMLInputStream& stream);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Get the list of expected attributes for this element.
	 */
	virtual void addExpectedAttributes(ExpectedAttributes& attributes);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Read values from the given XMLAttributes set into their specific fields.
	 */
	virtual void readAttributes (const XMLAttributes& attributes,
	                             const ExpectedAttributes& expectedAttributes);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Write values of XMLAttributes to the output stream.
	 */
	virtual void writeAttributes (XMLOutputStream& stream) const;


/** @endcond doxygen-libsbml-internal */



};



LIBSEDML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSEDML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

LIBSEDML_EXTERN
SedReport_t *
SedReport_create(unsigned int level, unsigned int version);


LIBSEDML_EXTERN
void
SedReport_free(SedReport_t * sr);


LIBSEDML_EXTERN
SedReport_t *
SedReport_clone(SedReport_t * sr);


LIBSEDML_EXTERN
int
SedReport_addDataSet(SedReport_t * sr, SedDataSet_t * sds);


LIBSEDML_EXTERN
SedDataSet_t *
SedReport_createDataSet(SedReport_t * sr);


LIBSEDML_EXTERN
SedListOf_t *
SedReport_getSedListOfDataSets(SedReport_t * sr);


LIBSEDML_EXTERN
SedDataSet_t *
SedReport_getDataSet(SedReport_t * sr, unsigned int n);


LIBSEDML_EXTERN
SedDataSet_t *
SedReport_getDataSetById(SedReport_t * sr, const char * sid);


LIBSEDML_EXTERN
unsigned int
SedReport_getNumDataSets(SedReport_t * sr);


LIBSEDML_EXTERN
SedDataSet_t *
SedReport_removeDataSet(SedReport_t * sr, unsigned int n);


LIBSEDML_EXTERN
SedDataSet_t *
SedReport_removeDataSetById(SedReport_t * sr, const char * sid);


LIBSEDML_EXTERN
int
SedReport_hasRequiredAttributes(SedReport_t * sr);


LIBSEDML_EXTERN
int
SedReport_hasRequiredElements(SedReport_t * sr);




END_C_DECLS
LIBSEDML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  SedReport_H__  */

