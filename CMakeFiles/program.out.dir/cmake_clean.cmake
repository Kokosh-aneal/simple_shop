file(REMOVE_RECURSE
  "program.out.pdb"
  "program.out"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/program.out.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
