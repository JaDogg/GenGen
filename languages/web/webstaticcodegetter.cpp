#include "webstaticcodegetter.h"

WebStaticCodeGetter::WebStaticCodeGetter() {}

std::string WebStaticCodeGetter::GetBeforePreHeader()
{
    return std::string("<!DOCTYPE html>\n"
                       "<!--\n"
                       "##################################################\n"
                       "#                                                #\n"
                       "# Generated By GenGen : Code Generator Generator #\n"
                       "#                              -Bhathiya Perera  #\n"
                       "#                                                #\n"
                       "##################################################\n"
                       "-->\n"
                       "<html>\n"
                       "<!--PREHEADER-->\n");
}
std::string WebStaticCodeGetter::GetAfterPreHeader()
{
    return std::string("<head>\n"
                       "<meta charset=\"utf-8\" />\n"
                       "<title>Code Viewer</title>\n"
                       "<script src=\"https://google-code-prettify."
                       "googlecode.com/svn/loader/run_prettify.js?au"
                       "toload=true\" defer=\"defer\"></script>\n"
                       "<!--HEADER-->\n");
}
std::string WebStaticCodeGetter::GetAfterHeader()
{
    return std::string("</head>\n"
                       "<body onload=\"prettyPrint()\">\n"
                       "<pre class=\"prettyprint\" id=\"code\"></pre>\n"
                       "<script>//<![CDATA[\n"
                       "(function () {\n"
                       "  function html(s) {\n"
                       "    return s.replace(/&/g, '&amp;').replace(/</g,"
                       " '&lt;').replace(/>/g, '&gt;');\n"
                       "  }\n"
                       "\n"
                       "  var code = '';\n"
                       "  <!--CODE-->\n");
}
std::string WebStaticCodeGetter::GetBeforeFooter()
{
    return std::string("  document.getElementById(\"code\").innerHTML = code;\n"
                       "})();\n"
                       "//]]>\n"
                       "</script>\n<!--FOOTER-->\n");
}
std::string WebStaticCodeGetter::GetAfterFooter()
{
    return std::string("</body>\n<!--POSTFOOTER-->\n");
}
std::string WebStaticCodeGetter::GetAfterPostFooter()
{
    return std::string("</html>\n");
}
unsigned int WebStaticCodeGetter::GetStartingIndent()
{
    return 1;
}
