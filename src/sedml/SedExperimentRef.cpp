/**
 * @file SedExperimentRef.cpp
 * @brief Implementation of the SedExperimentRef class.
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
 */
#include <sedml/SedExperimentRef.h>
#include <sedml/SedListOfExperimentRefs.h>
#include <sbml/xml/XMLInputStream.h>


using namespace std;



LIBSEDML_CPP_NAMESPACE_BEGIN




#ifdef __cplusplus


/*
 * Creates a new SedExperimentRef using the given SED-ML Level and @ p version
 * values.
 */
SedExperimentRef::SedExperimentRef(unsigned int level, unsigned int version)
  : SedBase(level, version)
  , mExperimentId ("")
{
  setSedNamespacesAndOwn(new SedNamespaces(level, version));
}


/*
 * Creates a new SedExperimentRef using the given SedNamespaces object @p
 * sedmlns.
 */
SedExperimentRef::SedExperimentRef(SedNamespaces *sedmlns)
  : SedBase(sedmlns)
  , mExperimentId ("")
{
  setElementNamespace(sedmlns->getURI());
}


/*
 * Copy constructor for SedExperimentRef.
 */
SedExperimentRef::SedExperimentRef(const SedExperimentRef& orig)
  : SedBase( orig )
  , mExperimentId ( orig.mExperimentId )
{
}


/*
 * Assignment operator for SedExperimentRef.
 */
SedExperimentRef&
SedExperimentRef::operator=(const SedExperimentRef& rhs)
{
  if (&rhs != this)
  {
    SedBase::operator=(rhs);
    mExperimentId = rhs.mExperimentId;
  }

  return *this;
}


/*
 * Creates and returns a deep copy of this SedExperimentRef object.
 */
SedExperimentRef*
SedExperimentRef::clone() const
{
  return new SedExperimentRef(*this);
}


/*
 * Destructor for SedExperimentRef.
 */
SedExperimentRef::~SedExperimentRef()
{
}


/*
 * Returns the value of the "experimentId" attribute of this SedExperimentRef.
 */
const std::string&
SedExperimentRef::getExperimentId() const
{
  return mExperimentId;
}


/*
 * Predicate returning @c true if this SedExperimentRef's "experimentId"
 * attribute is set.
 */
bool
SedExperimentRef::isSetExperimentId() const
{
  return (mExperimentId.empty() == false);
}


/*
 * Sets the value of the "experimentId" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setExperimentId(const std::string& experimentId)
{
  if (!(SyntaxChecker::isValidInternalSId(experimentId)))
  {
    return LIBSEDML_INVALID_ATTRIBUTE_VALUE;
  }
  else
  {
    mExperimentId = experimentId;
    return LIBSEDML_OPERATION_SUCCESS;
  }
}


/*
 * Unsets the value of the "experimentId" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::unsetExperimentId()
{
  mExperimentId.erase();

  if (mExperimentId.empty() == true)
  {
    return LIBSEDML_OPERATION_SUCCESS;
  }
  else
  {
    return LIBSEDML_OPERATION_FAILED;
  }
}


/*
 * @copydoc doc_renamesidref_common
 */
void
SedExperimentRef::renameSIdRefs(const std::string& oldid,
                                const std::string& newid)
{
  if (isSetExperimentId() && mExperimentId == oldid)
  {
    setExperimentId(newid);
  }
}


/*
 * Returns the XML element name of this SedExperimentRef object.
 */
const std::string&
SedExperimentRef::getElementName() const
{
  static const string name = "experimentRef";
  return name;
}


/*
 * Returns the libSEDML type code for this SedExperimentRef object.
 */
int
SedExperimentRef::getTypeCode() const
{
  return SEDML_EXPERIMENT_REF;
}


/*
 * Predicate returning @c true if all the required attributes for this
 * SedExperimentRef object have been set.
 */
bool
SedExperimentRef::hasRequiredAttributes() const
{
  bool allPresent = true;

  return allPresent;
}



/** @cond doxygenLibSEDMLInternal */

/*
 * Write any contained elements
 */
void
SedExperimentRef::writeElements(LIBSBML_CPP_NAMESPACE_QUALIFIER
  XMLOutputStream& stream) const
{
  SedBase::writeElements(stream);
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Accepts the given SedVisitor
 */
bool
SedExperimentRef::accept(SedVisitor& v) const
{
  return false;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the parent SedDocument
 */
void
SedExperimentRef::setSedDocument(SedDocument* d)
{
  SedBase::setSedDocument(d);
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Gets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::getAttribute(const std::string& attributeName,
                               bool& value) const
{
  int return_value = SedBase::getAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Gets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::getAttribute(const std::string& attributeName,
                               int& value) const
{
  int return_value = SedBase::getAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Gets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::getAttribute(const std::string& attributeName,
                               double& value) const
{
  int return_value = SedBase::getAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Gets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::getAttribute(const std::string& attributeName,
                               unsigned int& value) const
{
  int return_value = SedBase::getAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Gets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::getAttribute(const std::string& attributeName,
                               std::string& value) const
{
  int return_value = SedBase::getAttribute(attributeName, value);

  if (return_value == LIBSEDML_OPERATION_SUCCESS)
  {
    return return_value;
  }

  if (attributeName == "experimentId")
  {
    value = getExperimentId();
    return_value = LIBSEDML_OPERATION_SUCCESS;
  }

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Predicate returning @c true if this SedExperimentRef's attribute
 * "attributeName" is set.
 */
bool
SedExperimentRef::isSetAttribute(const std::string& attributeName) const
{
  bool value = SedBase::isSetAttribute(attributeName);

  if (attributeName == "experimentId")
  {
    value = isSetExperimentId();
  }

  return value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setAttribute(const std::string& attributeName, bool value)
{
  int return_value = SedBase::setAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setAttribute(const std::string& attributeName, int value)
{
  int return_value = SedBase::setAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setAttribute(const std::string& attributeName, double value)
{
  int return_value = SedBase::setAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setAttribute(const std::string& attributeName,
                               unsigned int value)
{
  int return_value = SedBase::setAttribute(attributeName, value);

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Sets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::setAttribute(const std::string& attributeName,
                               const std::string& value)
{
  int return_value = SedBase::setAttribute(attributeName, value);

  if (attributeName == "experimentId")
  {
    return_value = setExperimentId(value);
  }

  return return_value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Unsets the value of the "attributeName" attribute of this SedExperimentRef.
 */
int
SedExperimentRef::unsetAttribute(const std::string& attributeName)
{
  int value = SedBase::unsetAttribute(attributeName);

  if (attributeName == "experimentId")
  {
    value = unsetExperimentId();
  }

  return value;
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Adds the expected attributes for this element
 */
void
SedExperimentRef::addExpectedAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER
  ExpectedAttributes& attributes)
{
  SedBase::addExpectedAttributes(attributes);

  attributes.add("experimentId");
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Reads the expected attributes into the member data variables
 */
void
SedExperimentRef::readAttributes(
                                 const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                   XMLAttributes& attributes,
                                 const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                   ExpectedAttributes& expectedAttributes)
{
  unsigned int level = getLevel();
  unsigned int version = getVersion();
  unsigned int numErrs;
  bool assigned = false;
  SedErrorLog* log = getErrorLog();

  if (log && getParentSedObject() &&
    static_cast<SedListOfExperimentRefs*>(getParentSedObject())->size() < 2)
  {
    numErrs = log->getNumErrors();
    for (int n = numErrs-1; n >= 0; n--)
    {
      if (log->getError(n)->getErrorId() == SedUnknownCoreAttribute)
      {
        const std::string details = log->getError(n)->getMessage();
        log->remove(SedUnknownCoreAttribute);
        log->logError(SedmlAdjustableParameterLOExperimentRefsAllowedCoreAttributes,
          level, version, details, getLine(), getColumn());
      }
    }
  }

  SedBase::readAttributes(attributes, expectedAttributes);

  if (log)
  {
    numErrs = log->getNumErrors();

    for (int n = numErrs-1; n >= 0; n--)
    {
      if (log->getError(n)->getErrorId() == SedUnknownCoreAttribute)
      {
        const std::string details = log->getError(n)->getMessage();
        log->remove(SedUnknownCoreAttribute);
        log->logError(SedmlExperimentRefAllowedAttributes, level, version,
          details, getLine(), getColumn());
      }
    }
  }

  // 
  // experimentId SIdRef (use = "optional" )
  // 

  assigned = attributes.readInto("experimentId", mExperimentId);

  if (assigned == true)
  {
    if (mExperimentId.empty() == true)
    {
      logEmptyString(mExperimentId, level, version, "<SedExperimentRef>");
    }
    else if (SyntaxChecker::isValidSBMLSId(mExperimentId) == false)
    {
      std::string msg = "The experimentId attribute on the <" +
        getElementName() + ">";
      if (isSetId())
      {
        msg += " with id '" + getId() + "'";
      }

      msg += " is '" + mExperimentId + "', which does not conform to the "
        "syntax.";
      logError(SedmlExperimentRefExperimentIdMustBeFitExperiment, level,
        version, msg, getLine(), getColumn());
    }
  }
}

/** @endcond */



/** @cond doxygenLibSEDMLInternal */

/*
 * Writes the attributes to the stream
 */
void
SedExperimentRef::writeAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER
  XMLOutputStream& stream) const
{
  SedBase::writeAttributes(stream);

  if (isSetExperimentId() == true)
  {
    stream.writeAttribute("experimentId", getPrefix(), mExperimentId);
  }
}

/** @endcond */




#endif /* __cplusplus */


/*
 * Creates a new SedExperimentRef_t using the given SED-ML Level and @ p version
 * values.
 */
LIBSEDML_EXTERN
SedExperimentRef_t *
SedExperimentRef_create(unsigned int level, unsigned int version)
{
  return new SedExperimentRef(level, version);
}


/*
 * Creates and returns a deep copy of this SedExperimentRef_t object.
 */
LIBSEDML_EXTERN
SedExperimentRef_t*
SedExperimentRef_clone(const SedExperimentRef_t* ser)
{
  if (ser != NULL)
  {
    return static_cast<SedExperimentRef_t*>(ser->clone());
  }
  else
  {
    return NULL;
  }
}


/*
 * Frees this SedExperimentRef_t object.
 */
LIBSEDML_EXTERN
void
SedExperimentRef_free(SedExperimentRef_t* ser)
{
  if (ser != NULL)
  {
    delete ser;
  }
}


/*
 * Returns the value of the "experimentId" attribute of this
 * SedExperimentRef_t.
 */
LIBSEDML_EXTERN
char *
SedExperimentRef_getExperimentId(const SedExperimentRef_t * ser)
{
  if (ser == NULL)
  {
    return NULL;
  }

  return ser->getExperimentId().empty() ? NULL :
    safe_strdup(ser->getExperimentId().c_str());
}


/*
 * Predicate returning @c 1 (true) if this SedExperimentRef_t's "experimentId"
 * attribute is set.
 */
LIBSEDML_EXTERN
int
SedExperimentRef_isSetExperimentId(const SedExperimentRef_t * ser)
{
  return (ser != NULL) ? static_cast<int>(ser->isSetExperimentId()) : 0;
}


/*
 * Sets the value of the "experimentId" attribute of this SedExperimentRef_t.
 */
LIBSEDML_EXTERN
int
SedExperimentRef_setExperimentId(SedExperimentRef_t * ser,
                                 const char * experimentId)
{
  return (ser != NULL) ? ser->setExperimentId(experimentId) :
    LIBSEDML_INVALID_OBJECT;
}


/*
 * Unsets the value of the "experimentId" attribute of this SedExperimentRef_t.
 */
LIBSEDML_EXTERN
int
SedExperimentRef_unsetExperimentId(SedExperimentRef_t * ser)
{
  return (ser != NULL) ? ser->unsetExperimentId() : LIBSEDML_INVALID_OBJECT;
}


/*
 * Predicate returning @c 1 (true) if all the required attributes for this
 * SedExperimentRef_t object have been set.
 */
LIBSEDML_EXTERN
int
SedExperimentRef_hasRequiredAttributes(const SedExperimentRef_t * ser)
{
  return (ser != NULL) ? static_cast<int>(ser->hasRequiredAttributes()) : 0;
}




LIBSEDML_CPP_NAMESPACE_END


