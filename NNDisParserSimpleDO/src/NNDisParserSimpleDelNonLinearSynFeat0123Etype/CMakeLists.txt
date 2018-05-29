
include_directories(
  model
)

add_executable(NNDisParserSimpleDelNonLinearSynFeat0123Etype NNDisParser.cpp)
target_link_libraries(NNDisParserSimpleDelNonLinearSynFeat0123Etype ${LIBS})
