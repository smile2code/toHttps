chrome.webRequest.onBeforeRequest.addListener(
	function(details) {
		//console.log(details);
		var url = details.url;
		url = url.replace("http://", "https://");
		var xhr = new XMLHttpRequest();
		xhr.open("HEAD", url, false);
		try {
			xhr.send();
			if (xhr.status >= 200 && xhr.status <= 304) {
				//console.log('redirect....');
				return {
					redirectUrl: url
				};
			} else {
				//console.log('no redirect....');
				return {};
			}
		} catch (e) {
			//console.log('no redirect....');
			return {};
		}
	}, {
		urls: ["http://*/"]
	}, ["blocking"]);