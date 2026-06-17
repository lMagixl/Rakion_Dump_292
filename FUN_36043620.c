
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __cdecl
FUN_36043620(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x1c;
    param_3 = param_3 + -0x1c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}

