/*
crawl(startURL)
{
	add startURL to Queue
	while (Queue is not empty) {
		nextURL = remove head of Queue
		page = open(nextURL)
		while ((url = scanForHyperlinks(page)) != NULL) {
			if (alreadySeen(url)) continue
			add url to Queue
		}
	}
}
*/