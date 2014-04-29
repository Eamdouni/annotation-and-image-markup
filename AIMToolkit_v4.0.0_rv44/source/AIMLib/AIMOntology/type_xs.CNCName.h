#ifndef _ALTOVA_INCLUDED_AIMOntology_ALTOVA_xs_ALTOVA_CNCName
#define _ALTOVA_INCLUDED_AIMOntology_ALTOVA_xs_ALTOVA_CNCName



namespace AIMOntology
{

namespace xs
{	

class CNCName : public TypeBase
{
public:
	AIMOntology_EXPORT CNCName(xercesc::DOMNode* const& init);
	AIMOntology_EXPORT CNCName(CNCName const& init);
	void operator=(CNCName const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CNCName); }
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace AIMOntology

#endif // _ALTOVA_INCLUDED_AIMOntology_ALTOVA_xs_ALTOVA_CNCName