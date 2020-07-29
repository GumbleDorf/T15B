/*
crawl(startURL)
{
	// Set has O(1) lookup time
	Set seenSet = new set
	add startURL to Queue
	while (Queue is not empty) {
		nextURL = remove head of Queue
		page = open(nextURL)
		while ((url = scanForHyperlinks(page)) != NULL) {
			if (alreadySeen(url)) continue
			add url to Queue
			seenSet.add(url)
		}
	}
}

alreadyseen(url) {
	for each node in the graph:
		check if edge(node, url) exists
}

alreadyseen(url) {
	check the queue for url
}

alreadyseen(url) {
	check if url is in set
}


Depth First

Stack:
visited = [1, 1, 1, 1, 1, 1, 1]

Bread First

Queue:
visited = [1, 1, 1, 1, 1, 1, 1]

*/
