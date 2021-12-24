/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 25de7f8444de413276c845453754b1a01b9ecbf6 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stemword, 0, 3, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL)
	ZEND_ARG_TYPE_MASK(0, arg, MAY_BE_ARRAY|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO(0, lang, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, enc, IS_STRING, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(stemword);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(stemword, arginfo_stemword)
	ZEND_FE_END
};
