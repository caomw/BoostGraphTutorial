#include "add_custom_and_selectable_edge_between_vertices.h"
#include <boost/test/unit_test.hpp>
#include "add_custom_and_selectable_edge_between_vertices_demo.impl"
#include "create_empty_undirected_custom_and_selectable_edges_and_vertices_graph.h"
#include "add_custom_and_selectable_edge_between_vertices.h"
#include "add_custom_vertex.h"

BOOST_AUTO_TEST_CASE(test_add_custom_and_selectable_edge_between_vertices_thorough)
{
  {
    auto g = create_empty_undirected_custom_and_selectable_edges_and_vertices_graph();
    const auto from = add_custom_vertex(
      my_custom_vertex("Bert"), g
    );
    const auto to = add_custom_vertex(
      my_custom_vertex("Ernie"), g
    );
    add_custom_and_selectable_edge_between_vertices(
      my_custom_edge("Friends"), false, from, to, g
    );
    BOOST_CHECK(boost::num_edges(g) == 1);
  }
}
