import requests
from kudagogetparams import GeoParams
import json

url = "https://kudago.com/public-api/v1.4/events/?order_by=-publication_date&location=msk"


def getevents(geoparams: GeoParams = None, date=None) -> dict:
    url1 = "https://kudago.com/public-api/v1.4/events/?order_by=-publication_date&location=msk"

    if date:
        url1 += f"&actual_since={date}"

    if geoparams:
        lon = geoparams.lon
        lat = geoparams.lat
        radius = geoparams.radius
        url1 += f"&lon={lon}&lat={lat}&radius={radius}"

    getres = requests.get(url1)
    results = json.loads(getres.content)
    eventlist = results['results']

    events = {}

    count = 1
    for dicts in eventlist:
        key = dicts['id']
        value = dicts['title']
        events[key] = value
        if count >= 6:
            break
        count += 1

    return events
