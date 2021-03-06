/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CUVP_INT_NonNeg
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CUVP_INT_NonNeg

#include "type_iso.CANY.h"


namespace AIMXML
{

namespace iso
{	

class CUVP_INT_NonNeg : public ::AIMXML::iso::CANY
{
public:
	AIMXML_EXPORT CUVP_INT_NonNeg(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CUVP_INT_NonNeg(CUVP_INT_NonNeg const& init);
	void operator=(CUVP_INT_NonNeg const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CUVP_INT_NonNeg); }

	MemberAttribute<double,_altova_mi_iso_altova_CUVP_INT_NonNeg_altova_probability, 0, 0> probability;	// probability Cdouble
	MemberElement<iso::CINT_NonNeg, _altova_mi_iso_altova_CUVP_INT_NonNeg_altova_value2> value2;
	struct value2 { typedef Iterator<iso::CINT_NonNeg> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CUVP_INT_NonNeg
