graph = {
  'a': ['b', 'c'],
  'b': ['d', 'e'],
  'c': ['f'],
  'f': [],
  'd': [],
  'e': []
}

def dfs(graph, node, visited, cost, cost_to_node):
    if node not in visited:
        print(node)
        visited.add(node)
        cost_to_node[node] = cost
        for neighbour in graph[node]:
            dfs(graph, neighbour, visited, cost + 1, cost_to_node)

visited = set()
cost_to_node = {}

print("Following is the Depth-First Search with Cost Tracking")
dfs(graph, 'a', visited, 0, cost_to_node)

print("Cost to reach each node:", cost_to_node)