/*
 BEXSLT.h
 BaseElements Plug-In
 
 Copyright 2010-2011 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp
 
 http://www.goya.com.au/baseelements/plugin
 
 */


#if !defined(BEXSLT_H)
	#define BEXSLT_H


#include "BEPluginUtilities.h"


#include <libxml/xpathInternals.h>


fmx::TextAutoPtr ApplyXSLT ( StringAutoPtr xml_path, StringAutoPtr xslt, StringAutoPtr csv_path );

fmx::TextAutoPtr ApplyXSLTInMemory (StringAutoPtr xml, StringAutoPtr xslt );
fmx::TextAutoPtr ApplyXPathExpression ( StringAutoPtr xml, StringAutoPtr xpath, StringAutoPtr ns_list, const xmlXPathObjectType xpath_object_type = XPATH_STRING );

#endif // BEXSLT_H
