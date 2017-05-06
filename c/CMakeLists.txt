set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

set(CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/reverse_integer.c)
add_executable(7.Reverse_Integer ${CURRENT_SOURCE})
set_target_properties(7.Reverse_Integer PROPERTIES FOLDER "C") 

set(CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/reverse_linked_list.c)
add_executable(206.Reverse_Linked_List ${CURRENT_SOURCE})
set_target_properties(206.Reverse_Linked_List PROPERTIES FOLDER "C") 

set(CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/add_two_numbers.c)
add_executable(2.Add_Two_Numbers ${CURRENT_SOURCE})
set_target_properties(2.Add_Two_Numbers PROPERTIES FOLDER "C") 

set(CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/remove_linked_list_elements.c)
add_executable(203.Remove_Linked_List_Elements ${CURRENT_SOURCE})
set_target_properties(203.Remove_Linked_List_Elements PROPERTIES FOLDER "C") 

