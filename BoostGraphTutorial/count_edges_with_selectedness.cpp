#include "count_edges_with_selectedness.h"

#include "count_edges_with_selectedness_demo.impl"

#include <cassert>
#include <iostream>

#include "create_empty_directed_custom_and_selectable_edges_and_vertices_graph.h"
#include "add_custom_and_selectable_edge.h"

void count_edges_with_selectedness_test() noexcept
{
  {
    auto g = create_empty_directed_custom_and_selectable_edges_and_vertices_graph();
    add_custom_and_selectable_edge(
      my_custom_edge("AB"), true, g
    );
    add_custom_and_selectable_edge(
      my_custom_edge("AA"), false, g
    );
    assert(count_edges_with_selectedness( true, g) == 1);
    assert(count_edges_with_selectedness(false, g) == 1);
  }
  count_edges_with_selectedness_demo();
}
