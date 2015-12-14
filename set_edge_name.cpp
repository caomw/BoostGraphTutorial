#include "set_edge_name.h"

#include "set_edge_name_demo.impl"

#include <cassert>

#include "create_empty_named_edges_and_vertices_graph.h"
#include "add_named_edge.h"
#include "find_first_edge_with_name.h"

void set_edge_name_test() noexcept
{
  auto g = create_empty_named_edges_and_vertices_graph();
  const std::string old_name{"Dex"};
  add_named_edge(old_name, g);
  const auto vd = find_first_edge_with_name(old_name, g);
  assert(get_edge_name(vd, g) == old_name);
  const std::string new_name{"Diggy"};
  set_edge_name(new_name, vd, g);
  assert(get_edge_name(vd, g) == new_name);

  set_edge_name_demo();
  std::cout << __func__ << ": OK" << '\n';
}