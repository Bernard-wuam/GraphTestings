#pragma once
#include <iostream>
#include <map>
#include <tuple>
#include <vector>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>

template <typename N = char, typename W = double>
class ADjacencyListGraph
{
    private:

    void deepFirst(const N&,std::unordered_set<N>& ) const;
    std::unordered_map<N, std::vector<std::pair<N, W>>> adjacencyGraph;

    public:
    ADjacencyListGraph();
    ~ADjacencyListGraph();
    ADjacencyListGraph(std::initializer_list<std::pair<N, std::vector<std::pair<N, W>>>>);
    void addAdjacentEdge(const N&, const std::pair<N, W>&);
    void breathFirstTransversal() const;
    void deepFirstTransversal() const;
};

