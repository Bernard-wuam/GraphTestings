#include "adjacencylistgraph.h"


template<typename N, typename W>
<<<<<<< HEAD
void ADjacencyListGraph<N, W>::deepFirst(const N & node, std::unordered_set<N>& visited) const
{
  std::cout << node <<"->";
  visited.insert (node);
  for(auto c : adjacencyGraph.at(node)){
    auto nodeOfWeight = std::get<0>(c);
    auto isVisited = visited.find(nodeOfWeight);
    if(isVisited == visited.end()) deepFirst (nodeOfWeight,visited);
  }
}

template<typename N, typename W>
=======
>>>>>>> ca46051a55d2ec09c21f49ec120a9a51c2712ee3
ADjacencyListGraph<N, W>::ADjacencyListGraph()
{}

template<typename N, typename W>
ADjacencyListGraph<N, W>::~ADjacencyListGraph()
{}

template<typename N, typename W>
ADjacencyListGraph<N, W>::ADjacencyListGraph(std::initializer_list<std::pair<N, std::vector<std::pair<N, W>>>> ls)
{
<<<<<<< HEAD
  for (auto c : ls)
  {
    auto mapKey = std::get<0>(c); //gets the key of the adjacency graph.
    //
    const auto& vecOfPairs = std::get<1>(c);

    adjacencyGraph[mapKey] = {};

    for (const auto& c : vecOfPairs)
    {
      auto nodeName = std::get<0>(c);
      auto nodeWeight = std::get<1>(c);

      adjacencyGraph[mapKey].push_back(std::make_pair(nodeName, nodeWeight));

      auto v = adjacencyGraph.find(nodeName);
      if (v == adjacencyGraph.end()) adjacencyGraph[nodeName] = {};
    }
  }
=======

	for (auto c : ls)
	{
		auto mapKey = std::get<0>(c); //gets the key of the adjacency graph.
		//
		const auto& vecOfPairs = std::get<1>(c);

		adjacencyGraph[mapKey] = {};

		for (const auto& c : vecOfPairs)
		{
			auto nodeName = std::get<0>(c);
			auto nodeWeight = std::get<1>(c);

			adjacencyGraph[mapKey].push_back(std::make_pair(nodeName, nodeWeight));

			auto v = adjacencyGraph.find(nodeName);
			if (v == adjacencyGraph.end()) adjacencyGraph[nodeName] = {};
		}
	}


>>>>>>> ca46051a55d2ec09c21f49ec120a9a51c2712ee3
}

template<typename N, typename W>
void ADjacencyListGraph<N, W>::addAdjacentEdge(const N& node, const std::pair<N, W>& nodeWeight)
{
<<<<<<< HEAD
  auto c = adjacencyGraph.find(node);
  if (c == adjacencyGraph.end())
  {
    adjacencyGraph[node] = { nodeWeight };
  }
  else
  {
    adjacencyGraph[node].push_back(nodeWeight);
  }
=======
	auto c = adjacencyGraph.find(node);
	if (c == adjacencyGraph.end())
	{
		adjacencyGraph[node] = { nodeWeight };
	}
	else
	{
		adjacencyGraph[node].push_back(nodeWeight);
	}
>>>>>>> ca46051a55d2ec09c21f49ec120a9a51c2712ee3
}

template<typename N, typename W>
void ADjacencyListGraph<N, W>::breathFirstTransversal() const
{
<<<<<<< HEAD
  std::unordered_set<N> visited;
  std::queue<N> q;

  for (const auto& [node, listOfEdges] : adjacencyGraph)
  {
    auto isNodePresent = visited.find(node);

    if (isNodePresent == visited.end())
    {
      visited.insert(node);
      q.emplace(node);

      while (!q.empty())
      {
        auto nodeRemoveFromQueue = q.front();
        q.pop();
        std::cout << nodeRemoveFromQueue  ;
        std::cout << "->";
        for (const auto& c : adjacencyGraph.at(nodeRemoveFromQueue)){
          auto edgeNode = std::get<0>(c);
          auto edgeNodeVisted = visited.find(edgeNode);
          if (edgeNodeVisted == visited.end())
          {
            visited.insert(edgeNode);
            q.emplace(edgeNode);
          }
        }

      }
      std::cout << "" << std::endl;
    }
  }
}

template<typename N, typename W>
void ADjacencyListGraph<N, W>::deepFirstTransversal() const
{
  std::unordered_set<N> visited;
  std::cout << "called..";
  for(const auto& [mapKey,val]: adjacencyGraph){
    auto isVisited = visited.find(mapKey);

    if(isVisited == visited.end ()){
      //call the deepFirstMethod
      deepFirst (mapKey,visited);
    }
  }
}
=======
	std::unordered_set<N> visited;
	std::queue<N> q;

	for (const auto& [node, listOfEdges] : adjacencyGraph)
	{
		auto isNodePresent = visited.find(node);

		if (isNodePresent == visited.end())
		{
			visited.insert(node);
			q.emplace(node);

			while (!q.empty())
			{
				auto nodeRemoveFromQueue = q.front();
				q.pop();
				std::cout << nodeRemoveFromQueue  ;
				std::cout << "->";
				for (const auto& c : adjacencyGraph.at(nodeRemoveFromQueue))				{
					
					auto edgeNode = std::get<0>(c);
					auto edgeNodeVisted = visited.find(edgeNode);

					if (edgeNodeVisted == visited.end())
					{
						visited.insert(edgeNode);
						q.emplace(edgeNode);
					}
				}

			}
			std::cout << "" << std::endl;
		}
	}
}
>>>>>>> ca46051a55d2ec09c21f49ec120a9a51c2712ee3
